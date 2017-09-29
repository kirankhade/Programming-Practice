#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int maxSum(vector<int> arr)
{
	int maxsofar=0,maxendhere=0;
	
	for(int i=0;i<arr.size();i++)
	{
		maxendhere=max(maxendhere+arr[i],0);
		maxsofar=max(maxsofar,maxendhere);
	}
	return maxsofar;
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

cout<<maxSum(arr);

return 0;
}
