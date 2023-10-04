//晦暗的宇宙，我们找不到光，看不见尽头，但我们永远都不会被黑色打倒。——Quinn葵因
#define _CRT_SECURE_NO_WARNINGS

#include<bits/stdc++.h>
#define ll long long

int sum(int x,int y){return x + y;}

int main(){
    void* a;
    int (*p)(int x,int y) = sum;    
    a = p;
    std::cout<<((int(*)(int, int))a)(1, 2)<<"\n";
}
