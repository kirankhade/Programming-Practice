#include <iostream>

template<typename ReturnType, typename Function>
ReturnType Retry(Function func)
{
	return func(); //return 
}


int main()
{
	auto f1 = [&](){
		return 5;
	};
	
	int i = Retry<int>(f1);
	
	std::cout<<"THis is what func returned:"<<i<<std::endl;
	
	auto f2 = [&](){
	return "Hello";	
	};
	
	std::string str = Retry<std::string>(f2);
	
	std::cout<<"THis is what func returned:"<<str<<std::endl;
	return 0;
}
