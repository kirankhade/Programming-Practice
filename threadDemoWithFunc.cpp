#include<iostream>
#include<thread>
#include<string>

using namespace std;

class myClass{
	
	public:
		void operator()()
		{
			cout<<"THis is my function object"<<endl;
		}
		void function()
		{
			cout<<"my class public function is called"<<endl;
		}
		
		void printSomething(const string& str)
		{
			cout<<str;
		}
};


int main()
{
	
	myClass object,object2;
	thread t(object);
	thread t1(&myClass::function,object2);
	thread t2(&myClass::printSomething,object2,"helloooo");
	
	cout<<endl<<"Ids for all threads"<<endl;
	cout<<t.get_id()<<endl;
	cout<<t1.get_id()<<endl;
	cout<<t2.get_id()<<endl;
	
	t2.join();
	t.join();
	t1.join();
	

	return 0;
}
