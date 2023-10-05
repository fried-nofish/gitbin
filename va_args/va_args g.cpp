
//在 C 语言中，va_list 是一个用来存储可变参数列表的结构体类型。它可以帮助我们在函数或者宏中处理可变数量的参数。

//va_start 宏被用来初始化 va_list 结构体，以便开始访问可变参数列表。它接受两个参数，第一个参数是 va_list 结构体变量的名称，用来存储可变参数列表的信息；第二个参数是可变参数列表中的最后一个已知的固定参数。这个宏会把 va_list 初始化为指向可变参数的第一个参数的指针。

//va_arg 宏用于从可变参数列表中按照指定的类型和顺序获取参数的值。它需要两个参数，第一个参数是 va_list 结构体变量的名称；第二个参数是要获取的参数的类型。这个宏会返回指定类型的参数值，并将 va_list 递增到下一个可变参数位置。

//va_end 宏用于结束对可变参数的访问。它接受一个参数，即 va_list 结构体变量的名称。它会清理 va_list 结构体的相关资源，确保不会出现内存泄漏，并使得该结构体再次使用会导致未定义的行为。

#include <stdio.h>
#include <stdarg.h>

void print_numbers(int count, ...)
{
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        printf("%d ", num);
    }

    va_end(args);
}

int main()
{
    print_numbers(5, 1, 2, 3, 4, 5);
    return 0;
}

//在上述代码中，print_numbers 函数接受一个参数 count，用来指定要打印的数字的个数，后面的参数是要打印的数字。在 print_numbers 函数中，通过先调用 va_start 宏来初始化 args 变量，然后使用 va_arg 宏按照 int 类型顺序获取可变参数的值，并打印出来，最后通过调用 va_end 宏来结束对可变参数的访问。

//计算平均值

#include <stdio.h>
#include <stdarg.h>

double average(int count, ...) {
    va_list args;
    va_start(args, count);

    double sum = 0;

    for (int i = 0; i < count; i++) {
        int num = va_arg(args, int);
        sum += num;
    }

    va_end(args);

    return sum / count;
}

int main() {
    double avg = average(5, 1, 2, 3, 4, 5);
    printf("Average: %.2f\n", avg);
    return 0;
}

//自定义 printf 函数来打印不同类型的参数

#include <stdio.h>
#include <stdarg.h>

void print(const char* format, ...) {
    va_list args;
    va_start(args, format);

    while (*format) {
        if (*format == '%') {
            format++;

            if (*format == 'd') {  // %d表示整数
                int num = va_arg(args, int);
                printf("%d ", num);
            }
            else if (*format == 'c') {  // %c表示字符
                int ch = va_arg(args, int);
                printf("%c ", ch);
            }
            else if (*format == 'f') {  // %f表示浮点数
                double num = va_arg(args, double);
                printf("%.2f ", num);
            }
        }
        else {
            putchar(*format);
        }

        format++;
    }

    va_end(args);
    putchar('\n');
}

int main() {
    print("Hello %s, my age is %d, my favorite character is %c, and the value of pi is %f.",
        "World", 25, 'A', 3.14159);
    return 0;
}


//利用 vprintf 自行实现变参函数 print

#include <stdio.h>
#include <stdarg.h>

void print(const char* format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

int main() {
    print("This is a test: %d %c %.2f\n", 10, 'A', 3.14159);
    return 0;
}


/*
在使用标准库中的 stdarg.h 头文件时，可能会出现一些不安全的情况，主要包括以下几种情况：

忘记使用 va_start 宏初始化可变参数列表：在使用可变参数之前，必须先调用 va_start 宏来初始化 va_list 结构，否则获取可变参数的结果将是不确定的。

未正确使用 va_arg 宏访问可变参数：va_arg 宏用来按照指定的类型获取可变参数的值，但必须确保已正确指定了参数的类型。如果类型不匹配，将导致获取的值与实际参数类型不符，可能导致程序错误、未定义行为或崩溃。

忘记调用 va_end 宏结束对可变参数的访问：在使用完可变参数后，必须调用 va_end 宏来清理 va_list 结构，否则可能造成内存泄漏或其他错误。

可变参数的个数不正确：在使用可变参数时，需要明确参数的个数，以便正确访问和处理每个参数。如果参数个数不正确，可能会导致访问越界或获取无效的参数值。

错误地指定 va_arg 所要获取的类型会导致程序的行为不确定，可能导致以下后果：

读取到错误的内存：va_arg 宏会按指定的类型来解析可变参数，如果错误地指定了类型，会导致从错误的内存位置读取数据。这可能会导致程序读取到无效或未初始化的数据，从而引发程序错误或未定义行为。

编译器错误或警告：如果指定了错误的类型，并且编译器能够检测到这个错误，它可能会发出警告或错误提示。这是编译器的一种保护机制，以防止出现严重的编程错误。

内存破坏或崩溃：如果错误地指定了 va_arg 的类型，使其与实际参数类型不匹配，可能会导致程序试图在错误的内存位置上读取数据，进而破坏内存结构或导致程序崩溃。

*/