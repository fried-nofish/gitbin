#include <iostream>
#include <string>
using namespace std;
 
template<class T>
void f(T t)
{
	if constexpr(is_same<T, int>::value)
	{
		t = 8;
	}
	else if constexpr(is_same<T, string>::value)
	{
		t = "hello";
	}//预编译
	cout<<t<<endl;
}
 
int main()
{
	f(5);
	f("hi"s);
	return 0;
}
 