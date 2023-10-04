//晦暗的宇宙，我们找不到光，看不见尽头，但我们永远都不会被黑色打倒。——Quinn葵因
#include<bits/stdc++.h>
#define _C(_0,_1,_2,_3,_4,_5,n,...) n
#define C(...) _C( , ## __VA_ARGS__ ,5,4,3,2,1,0)//数量
#define GULE(x,y) x y
// #define CHANGE3(M,count) 
#define CHANGE2(M,count) M##count
#define CHANGE(M,count) CHANGE2(M,count)
#define TO(M,...) GULE( CHANGE(M,C(__VA_ARGS__)), (__VA_ARGS__)) 
#define PR1(a1) std::cout<<a1<<std::endl
#define PR2(a1,a2) std::cout<<a1<<","<<a2<<std::endl
#define PR3(a1,a2,a3) std::cout<<a1<<","<<a2<<","<<a3<<std::endl

int main(){
    TO(PR,1);
    TO(PR,1,2);
    TO(PR,1,2,3);
}