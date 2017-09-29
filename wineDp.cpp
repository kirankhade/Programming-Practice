#include<iostream>
#include<stdlib.h>
#include<vector>

    int n;
	int p[10];
	int sol[10][10];
using namespace std;


int max(int,int);
int profit(int,int);


int main()
{
	
	cin>>n;

	for(int i=0;i<n;i++)
	cin>>p[i];
	
	
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	
	{
		sol[i][j]=-1;
	}
	cout<<endl<<":-"<<profit(0,n);
	cout<<sol[0][n];
	
	return 0;
	
	
}


int profit(int be,int end)
{
	if(be>end)
	return 0;
	
	
	if(!sol[be][end]==-1)
	return sol[be][end];
	int year=n-(end-be+1)+1;	
	return sol[be][end]=max(profit(be+1,end)+p[be]*year,profit(be,end-1)+p[end]*year);
	
	
}

int max(int a,int b)
{
	return a>b?a:b;
	
}
