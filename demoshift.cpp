#include<iostream>
#include<stdio.h>

using namespace std;
int dp[20][20];

int main()
{
	int i,n=20;
	 for (int i = 0; i < n; i++) {  
        dp[1 << i][i] = 0;
		
		cout<<(1<<i) <<" "<<i<<endl;    // base case of visiting just 1 city  
    }
	
	
	
	return 0;
}
