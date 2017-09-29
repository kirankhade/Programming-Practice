#include<iostream>
#include<vector>
#include<String>

using namespace std;

int max(int a,int b)
{
	return a > b? a : b; 
}

int LCS(string s1,string s2,int m,int n)
{
if(m==0||n==0)
return 0;
if(s1[m]==s2[n])
return 1+LCS(s1,s2,m-1,n-1);
else
return max(LCS(s1,s2,m-1,n),LCS(s1,s2,m,n-1));	
	
}

int LCSDP(string s1,string s2,int m,int n)
{
	int soln[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0||j==0)
			soln[i][j]=0;
			
			else if(s1[i]==s2[j])
			{
				soln[i][j]=1+soln[i-1][j-1];
			}
			else
			{
				soln[i][j]=max(soln[i][j-1],soln[i-1][j]);
			}
			
			
		}
		
	}
	return soln[m][n];
	
	
}


int main()
{
	
string s1,s2;
cin>>s1>>s2;
int m=s1.length();
int n=s2.length();

cout<<"LCS of length :"<<LCSDP(s1,s2,m,n)<<endl;	
	
	
	return 0;
}

