#include<iostream>
#include<stdlib.h>
#include<vector>


using namespace std;


class A{
	
	static int n;//static data member shared copy between each object of a class 
	public:
		A(int);
		~A();
		static void display();//static member function which can be called without class object and can access static data members only ,other static functions
};
int A::n=25;

A::A(int n)//:n(n)//member intialisation list
{
	cout<<"A's Constructor called"<<endl;
	//this->n=n;//Here if we dont use this then value will be stored in local n so after end of function value of n wiil not be initialised.
}
A::~A()
{
	cout<<"A's destructor called";
}

void A::display()
{
	cout<<A::n;
}
int main()
{
	
	cout<<"inside main"<<endl;
	A a(5);
	A::display();
	return 0;

}
