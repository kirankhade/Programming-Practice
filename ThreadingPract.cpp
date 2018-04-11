#include<thread>
#include<iostream>

using namespace std;

class myFunctor{
	
	public:
		void operator()()
		{
			cout<<"This is my function object"<<endl;
		}
		
		void function()
		{
			cout<<"public function of my class is called";
		}
};

void threaded_fun()
{
	cout<<"Welcome to multithreading";
}



int main()
{
	myFunctor fun;
	thread t(myFunctor::function,fun);
//	t.detach();
	
	if(t.joinable())
	{
		t.join();
	}
	else
	cout<< "t is detached" <<endl;
	return 0;
}
