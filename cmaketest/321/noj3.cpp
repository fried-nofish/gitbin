#include<iostream>
using namespace std;

int main()
{
    unsigned long long n, m;
    cin >> n;
    for (m = n; n && m; n--) for (m = n; m && m % 10 >= m / 10 % 10; m /= 10);
    cout << ++n;
    return 0;
}