//晦暗的宇宙，我们找不到光，看不见尽头，但我们永远都不会被黑色打倒。——Quinn葵因
#include<bits/stdc++.h>
#define ll long long

std::array values{11, 22, 33};

int main(){
    auto [x, y, z]{values};  //初始化/构造函数构造
    auto [a, b, c] = values;//在右侧自动复制一个
    std::cout<<x<<" "<<y<<" "<<z<<"\n";
    std::cout<<a<<" "<<b<<" "<<c<<"\n";
}