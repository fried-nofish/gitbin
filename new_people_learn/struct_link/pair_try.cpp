//晦暗的宇宙，我们找不到光，看不见尽头，但我们永远都不会被黑色打倒。——Quinn葵因
#include<bits/stdc++.h>
#define ll long long

using std::vector;
using std::pair;
vector<pair<int,int>>A;

int main(){
    for(int i = 1;i <= 5;++i)A.push_back(std::make_pair(i,2 * i));
    for(auto [x,y] : A)std::cout<<x<<" "<<y<<"\n";
}