#include<iostream>
#include<stdlib.h>

using namespace std;

void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;	
}

void perm(char *s,int l,int r)
{
	if(l==r)
	cout<<s<<endl;
	else{
		for(int i=l;i<=r;i++)
		{
			swap(s+l,s+i);
			perm(s,l+1,r);
			swap(s+l,s+i);			
		}
		
		
	}
	
}


int main()
{
	char str[]="ABCD";
	perm(str,0,3);
	
	
	
	return 0;
}
