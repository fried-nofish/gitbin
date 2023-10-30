//晦暗的宇宙，我们找不到光，看不见尽头，但我们永远都不会被黑色打倒。——Quinn葵因
#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#define ll long long
#define int ll

using namespace std;

signed main(){
	char a[1000000];
	scanf("%s",a);
	int n = strlen(a);int x = 0,y = 1;bool p = 0;
	for(int i = 0;i < n;++i){
		if(a[i] == '.'){p = 1;continue;}
		x = x * 10 + a[i] - '0';
		if(p)y = y * 10;
	}
	int m = __gcd(x,y);
	if(x == 0){printf("0/1");}
	printf("%lld/%lld",x / m,y / m);
}

