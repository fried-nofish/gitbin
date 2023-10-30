//晦暗的宇宙，我们找不到光，看不见尽头，但我们永远都不会被黑色打倒。——Quinn葵因
#include<bits/stdc++.h>
#define ll long long

int sum(int x,int y){return x + y;}
int sum2(int (*T)(int x,int y),int z){return (*T)(1,2) + z;}
int (*S()) (int x,int y){return sum;}//返回值是函数指针的函数

int main(){
    int (*p)(int x,int y) = sum;
    std::cout<<(*p)(1,2)<<"\n";
    std::cout<<sum2(sum,3)<<"\n";
    int (*L)(int (*T)(int x,int y),int z) = sum2;
    std::cout<<(*L)(S(),3)<<"\n";
}