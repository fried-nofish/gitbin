//晦暗的宇宙，我们找不到光，看不见尽头，但我们永远都不会被黑色打倒。——Quinn葵因
#include<bits/stdc++.h>
#include <optional>
#include <string>
using namespace std;
#define ll long long
 
int main() {
    optional<int> o1 = 5;
    printf("%d\n", *o1);
    optional<string> o2 = "hello";
    printf("%s\n", o2->c_str());
    printf("%s\n", o2.value().c_str());
    o1.reset();
    return 0;
}