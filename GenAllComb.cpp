#include<iostream>
#include<stdlib.h>


using namespace std;

int r=3;
char data[3];
void gen(char *s,int i,int index,int n,int r)
{

		if(i>n)
		return ;
	if(index==r)
	{
		for(int j=0;j<r;j++)
		cout<<data[i];
		cout<<endl;
	}
	data[index]=s[i];
	gen(s,i+1,index+1,n,r);
	gen(s,i+1,index,n,r);
	
	
}


int main()
{
char arr[]={'1','2','3','4','5'};
cout<<"enter r";
int r;
cin>>r;	
 
gen(arr,0,0,5,3);	
	
	return 0;
}
