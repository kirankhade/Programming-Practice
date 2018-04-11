#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Temp{
	int data;
	
	public:
		Temp(int data){
			this->data =data;
		}
		
		Temp(Temp&& temp):Temp(std::move(temp.data)){
			cout<<"Move constructor called"<<endl;
		temp.data =-1;
		}
		
		Temp& operator=(Temp&& temp){
			cout<<"move = operator called"<<endl;
			this->data = temp.data;
			temp.data = -1;
		}
		
		~Temp()
		{
		};
		
		int getData()
		{
			return data;
		}
};

int main()
{
	Temp t1(5);
	cout<<"Data before move"<<t1.getData()<<endl;
	Temp t2 = std::move(t1);
	Temp t3 = t2;
	cout<<"Data moved to t2"<<t2.getData()<<endl;
	cout<<"T1 Data after move"<<t1.getData()<<endl;	//	cout<<t1.data;
}
