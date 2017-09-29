#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

void pset(char * set,int size)
{
int psize=pow(2,size);
	for(int i=0;i<psize;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(i&(1<<j))
			cout<<set[j];
		}
		cout<<"\n";
		
	}

}

int main()
{
	
	char set[]={'a','b','c'};
	pset(set,3);
	
	
	
	return 0;
}
