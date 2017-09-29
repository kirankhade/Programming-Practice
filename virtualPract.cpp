#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

class A{
	public:
	virtual void fun(){
		cout<<"Inside A's funct";// If we dont use virtual here both time this prog will call A's funct due to compile time it treat a's pntr but objects are created at runtime 
		//So to make it call at runtime virtual tells compiler to late binding.
	}
};

class B:public A
{
	public:
		void fun(){
			cout<<"Inside B's fun";
		}
	
	
};

int main()
{
	A *a1,*b1;
	A a;
	B b;
	a1=&a;
	b1=&b;
	a1->fun();
	cout<<endl;
	b1->fun(); 
	
	
	return 0;
}
