#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int dp[n];
	dp[0]=dp[1]=dp[2]=1;dp[3]=2;
	for(int i=4;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-3]+dp[i-4];
	}
	
	cout<<endl<<"Result is:-"<<dp[n];
	
	
	
	
	
	return 0;
}
