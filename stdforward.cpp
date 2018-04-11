#include <iostream>
#include <utility>

void fun(const int& x){
	std::cout<<"[lvalue]";
}

void fun(const int&& x){
	std::cout<<"[rvalue]";
}

template<class T> void tryy(T&& x)
{
	fun(x);
	fun(std::forward<T>(x));
}

int main()
{
	int a;
	tryy(a);
	std::cout<<" ";
	tryy(2);
	
	return 0;
}
