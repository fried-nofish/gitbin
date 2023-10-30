//晦暗的宇宙，我们找不到光，看不见尽头，但我们永远都不会被黑色打倒。——Quinn葵因
#include<bits/stdc++.h>
#define ll long long

 class Student {
    public:
     constexpr Student(const char* name, int age) : name_(name), age_(age) {}
     void print() const { std::cout << name_ << ' ' << age_ << '\n'; }
    private:
     const char* name_;
     int age_;
 };
 void test() {
     constexpr Student s{"zhangsan", 18};//要能有constexpr的构造函数
     s.print();
 }

int main(){
    test();
}