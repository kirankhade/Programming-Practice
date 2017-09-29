#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int mat[4][4];


bool IsAttacked(int x,int y,int N,int mat[4][4])
{
	for(int i=0;i<N;i++)
	{
		if(mat[i][x]==1)
	return true;
	}
	
	for(int i=0;i<N;i++)
	{
		if(mat[y][i]==1)
	return true;
	}	
	
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(((i+j)==(x+y))&&mat[i][j]==1)
			return true;
				if(((i-j)==(x-y))&&mat[i][j]==1)
			return true;
		}
	}
	
	return false;
	
}


bool NQueen(int mat[4][4],int q,int n)
{
	if(q==0)
	return true;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		if(IsAttacked(i,j,n,mat)==true)
		continue;
		mat[i][j]=1;
		if(NQueen(mat,q-1,n)==true)
		return true;
		else
		mat[i][j]=0;
		
	}
	return false;
}

int main()
{
	int n;
	cin>>n;
//	int mat[n][n];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		mat[i][j]=0;
	}
	if(NQueen(mat,n,n)==true)
	cout<<"Yes";
	else
	cout<<"No";
	
	
	
	
	return 0;
}
