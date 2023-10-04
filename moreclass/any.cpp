//晦暗的宇宙，我们找不到光，看不见尽头，但我们永远都不会被黑色打倒。——Quinn葵因
#include<bits/stdc++.h>
#include <any>

int main() {
  std::any data;
  data = 114514;
  std::cout << std::any_cast<int>(data) << std::endl;
  std::cout << *reinterpret_cast<int*>(data.data()) << std::endl;
  return 0;
}