#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

int n,sum=0;
vector<int> bits(0,100);
vector<int> arr(0,100);

void update(int x,int val)
{
	for(; x <= n; x += x&-x)
	{
		bits[x]+=val;
	}
}

int query(int x)
{

	for(;x>0;x-=x&-x)
	{
		sum+=bits[x];

	}
	return sum;
}

int main()
{
	int range,el;
	cout<<"enter No of elements";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>el;
		//arr[i]=el;
		cout<<i<<el;///<<arr[i];
		update(i,el);
	}

	cout<<"Enter at what range u expect sum";
	cin>>range;
	cout<<"Sum Is:"<<query(range);

	return 0;
}
