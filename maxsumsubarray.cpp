#include<iostream>
#include<vector>


using namespace std;

int max(int a,int b)
{
	return a > b ? a:b;
	
}

int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxsofar,maxendhere;
	maxsofar=maxendhere=0;
	for(int i=0;i<n;i++)
	{
		maxendhere=max(maxendhere+arr[i],0);
		maxsofar=max(maxendhere,maxsofar);
		
	}
	
	cout<<"MaxSum subarray is:-"<<maxsofar<<endl;
	
	
	return 0;
	
}
