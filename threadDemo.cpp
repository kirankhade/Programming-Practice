#include<iostream>
#include <thread>

using namespace std;

int main()
{
	thread t([]{cout<<this_thread::get_id();});
	t.join();
//t.detach();
}
