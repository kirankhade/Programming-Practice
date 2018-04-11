#include<iostream>
#include<future>


bool isPrime(int n)
{
	std::cout<<"Calculating please wait...\n";
	
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		return false;
	}
	
	return true;
}


int main()
{
	std::future<bool> fut = std::async(isPrime,313222313);
	
	std::cout<<"Checking whether its prime:-\n";
	
	bool ret = fut.get();
	
	if(ret)
	std::cout<<"Its prime...!\n";
	else
	std::cout<<"Its not prime..!\n";	
	
	return 0;
}
