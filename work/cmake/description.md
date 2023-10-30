## 一份关于本周cmake任务的提交文件报告
    多想和cmake爆了
    熟练掌握了打出下列命令:
        mkdir build 
        cd build

- [x] 自学 CMake，验证头文件发生改变时，使用 CMake 生成的后端进行编译时引用其的源文件会重新编译，并探究 CMake 对该现象的实现原理。

- [x] 构建目标的依赖文件只需添加源文件，无需添加头文件

- [ ] 同等条件下手动编写 Makefile 或 ninja.build 必须显式添加头文件依赖才能实现同等效果

### 以下是关于提交文件的一些说明：

<font size=5>.\  work:</font>


    自学CMake时的文档
    包含 set 与 PROJECT_NAME
    添加版本号和配置头文件

<font size=5>.\  work2:</font>

    验证了构建目标的依赖文件只需添加源文件，无需添加头文件
    包含了一个最简单的项目和头文件自动依赖


<font size=5>.\  work3:</font>

    验证头文件发生改变时，使用 CMake 生成的后端进行编译时引用其的源文件会重新编译
    验证过程：
    
    PS C:\article and  study\study\fish_new\work\cmake\work3> cd build 
    PS C:\article and  study\study\fish_new\work\cmake\work3\build> cmake --build .
    [ 50%] Linking CXX executable myproject.exe
    [100%] Built target myproject
    PS C:\article and  study\study\fish_new\work\cmake\work3\build> .\myproject.exe
    Hello, World!
    This is a message from myheader.h!
    PS C:\article and  study\study\fish_new\work\cmake\work3\build> dir myproject.exe


    目录: C:\article and  study\study\fish_new\work\cmake\work3\build


    Mode                 LastWriteTime         Length Name
    ----                 -------------         ------ ----
    -a----        2023/10/30     22:17          60211 myproject.exe


    PS C:\article and  study\study\fish_new\work\cmake\work3\build> cmake --build .
    [100%] Built target myproject

    PS C:\article and  study\study\fish_new\work\cmake\work3\build> dir myproject.exe


    目录: C:\article and  study\study\fish_new\work\cmake\work3\build


    Mode                 LastWriteTime         Length Name
    ----                 -------------         ------ ----
    -a----        2023/10/30     22:17          60211 myproject.exe

    将头文件从
    
    void printMessage() {std::cout << "This is a message from myheader.h!" << std::endl;}
    
    修改为
    
    void printMessage() {
    std::cout << "This is a message from myheader.h!" << std::endl;
    std::cout << "BOOM WITH CMAKE!" << std::endl;
    }

    后再使用后端编译
    
    PS C:\article and  study\study\fish_new\work\cmake\work3\build> cmake --build .
    -- Configuring done (0.3s)
    -- Generating done (0.0s)
    -- Build files have been written to: C:/article and  study/study/fish_new/work/cmake/work3/build
    [ 50%] Building CXX object CMakeFiles/myproject.dir/main.cpp.obj
    [100%] Linking CXX executable myproject.exe
    [100%] Built target myproject
    PS C:\article and  study\study\fish_new\work\cmake\work3\build> .\myproject.exe
    Hello, World!
    This is a message from myheader.h!
    BOOM WITH CMAKE!
    PS C:\article and  study\study\fish_new\work\cmake\work3\build> dir myproject.exe


    目录: C:\article and  study\study\fish_new\work\cmake\work3\build


    Mode                 LastWriteTime         Length Name
    ----                 -------------         ------ ----
    -a----        2023/10/30     22:25          60211 myproject.exe

通过三次后端的cmake编译，和查看时间戳可以看出当头文件发生改变时，使用 CMake 生成的后端进行编译时引用其的源文件会重新编译

探究 CMake 对该现象的实现原理:

    当头文件发生改变时，CMake 会根据依赖关系重新生成编译文件，并且只重新编译受影响的源文件。

    CMake 使用了一个叫做 "依赖关系分析"（Dependency Scanning）的机制来实现此功能。该机制会分析源文件之间的依赖关系，并将这些信息储存在一个底层的数据库中。当头文件发生改变时，CMake 会检查受影响的源文件的依赖关系，确定需要重新编译的文件，并且告知编译器。

    具体地，CMake 会使用一系列的命令来执行依赖关系分析。在 CMakeLists.txt 文件中，使用 add_executable 或者 add_library 命令添加源文件，然后使用 target_include_directories 命令指定头文件所在的目录。CMake 会自动检测源文件之间的包含关系，并且在构建时使用相应的编译选项。当头文件发生改变时，CMake 会通过检查时间戳等方式来确定需要重新编译的源文件。

    
