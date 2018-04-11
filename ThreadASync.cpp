#include<thread>
#include<iostream>
#include<vector>
#include<Windows.h>
#include<mutex>

using namespace std;

vector<int> vec;
mutex m;

void popFunc()
{
	m.lock();
	for(int i=0;i!=10;i++)
	{
		if(vec.size() > 0)
		{
			int val = vec.back();
			vec.pop_back();
			cout<<"Pop" << val <<endl;
		}
		
		Sleep(500);
	}
	m.unlock();
}

void pushFunc()
{
	m.lock();
	for(int i=0;i!=10;i++)
	{
		cout<<"Push "<< i << endl;
		Sleep(500);
		vec.push_back(i);
	}
	m.unlock();
	
}


int main()
{
	thread push(pushFunc);
	thread pop(popFunc);
	
	if(push.joinable())
	{
		push.join();
	}
	
	if(pop.joinable())
	{
		pop.join();
	}
		
	return 0;
}

