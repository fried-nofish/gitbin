//晦暗的宇宙，我们找不到光，看不见尽头，但我们永远都不会被黑色打倒。——Quinn葵因
#include<bits/stdc++.h>
#define ll long long

int _1;

ll sum(int n,...){
    ll ans = 0;
    va_list A;
    va_start(A,n);
    for(int i = 1;i <= n;++i)ans += va_arg(A,int);
    va_end(A);
    return ans;
}

int main(){
    std::cout<<sum(3,1,2,3);
}