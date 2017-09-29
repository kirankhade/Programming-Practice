/* Code for handling threaded diamond problem if you dont inherit classes with virtual function call is ambiguous due to presence of two object copies of A.

If we use virtual only one copy of  A will be maintained so ambuguity is resolved..............*/

#include<iostream>
#include<stdlib.h>

using namespace std;
class Animal{
	public:
		int weight;
		void display()
		{
			cout<<"Animals Display called"<<endl;
			
		}
};

class Tiger:virtual public Animal{
	public:
	
	
};
class Lion:virtual public Animal{
	public:

};

class Liger:public Lion,public Tiger{
	public:

		
};

int main()
{
	Liger l;
	l.`display();
	
	return 0;	
	
}


