//晦暗的宇宙，我们找不到光，看不见尽头，但我们永远都不会被黑色打倒。——Quinn葵因
#include<bits/stdc++.h>
#define ll long long
template<class T>
class myVector{
public:
	T* _selfElems;
	int _count;
	myVector(){
		_selfElems = new T[32];
		_count = 32;
		init();
	}
	myVector(int n){
		_selfElems = new T[n];
		_count = n;
		init();
	}
	void init(){
		memset(_selfElems, 0, sizeof(T)* _count);
	}
	T& operator[](int i){
		return _selfElems[i];
	}
	int size() const {
		return _count;
	}
	class iterator{
		public:
			T *num;
			iterator(T* A){num = A;}
			iterator(){num = NULL;}
        	void operator++(){num++;}
    		void operator++(int i){num++;}
        	void operator--(){num--;}
        	void operator--(int i){num--;}
			T operator*()const{return *num;}
        	bool operator != (const iterator& it){return it.num != num;}		
	};
	iterator begin(){return iterator(_selfElems);}
	iterator end(){return iterator(_selfElems + _count);}
};

int main(){
	myVector<int> A(10);
	for(int i = 0;i < 10;++i)A[i] = i;
    for(auto x : A){std::cout<<x<<" ";}
}