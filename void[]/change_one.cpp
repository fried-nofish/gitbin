//晦暗的宇宙，我们找不到光，看不见尽头，但我们永远都不会被黑色打倒。——Quinn葵因
#include<bits/stdc++.h>
#define ll long long

struct LINE{int x,y;};

int main(){
    int a = 1;int* b = &a;void* c = b;
    printf("%d\n",*(int*)c);
    //int -> int * -> void * 
    const int n = 0;const int *d = &n;int *p = const_cast<int *>(d);
    c = p;printf("%d\n",*(int*)c);
    //const int - > constint * - > int * - > void * 
    int* const l = &a;
    c = l;printf("%d\n",*(int*)c);
    //int *const -> void * 
    LINE k = {1,2};
    c = &k;LINE* t = (LINE *)c;
    std::cout<<t->x<<" "<<t -> y<<"\n";
    //T -> void* -> T*
    LINE * const T = &k;
    LINE * const * I = &T;//const LINE * *
    c = const_cast<LINE * *>(I);
    LINE * * D = (LINE * *)c;
    std::cout<<(*D) ->x<<" "<<(*D) -> y<<"\n";
    //T * const * -> void * 
}