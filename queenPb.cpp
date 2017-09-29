	#include<iostream>
	#include<stdlib.h>
	#include<vector>
	
	int qn[4][4];
	
	bool isAttack(int,int,int [4][4],int);
	
	bool soln(int,int[4][4]);
	
	
	using namespace std;
	
	
	int main()
	{
		
		cout<<soln(4,qn);
		
		
		return 0;
	}
	
	
	bool soln(int n,int board[4][4])
	{
		if(n==0)
		
		return true;
		
	for(int i=0;i<n;i++)
	
	{
		for(int j=0;j<n;j++)
		{
			if(isAttack(i,j,qn,4))
				continue;
			else
			qn[i][j]=1;
		if(soln(n-1,qn))
		return true;
		qn[i][j]=0;
	}
	}
	
	return false;	
		
	}
	
	bool isAttack(int x,int y,int board[4][4],int n)
	{
	for(int i=0;i<n;i++)
		{
		if(qn[i][x]==1)
		return true;
		}	
	for(int j=0;j<n;j++)
	{
		if(qn[y][j]==1)
		return true;
	}
	//Diagonal check		
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((i+j==x+y)&&qn[i][j]==1)
			return true;
			if(((i-j)==(x-y))&&qn[i][j]==1)
			return true;
		}
	}
		
	return false;	
		
		
		
	}
