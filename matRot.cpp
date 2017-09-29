#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int row=3,col=3;
		
		int a[3][3];
		int mat[3][3];
		 
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>a[i][j];	
				mat[i][j]=a[i][j];
				
			}
		}
		
		int m=0,n=0,cur,prev;
		
		while(m<row && n<col)
		{
			if(m+1==row||n+1==col)
			break;
			
			int prev=a[m+1][n];
			
			for(int i=n;i<col;i++)
			{
				cur=a[m][i];
				mat[m][i]=prev;
				prev=cur;
				
			}
			m++;
			
			for(int i=m;i<row;i++)
			{
				cur=a[i][col-1];
				mat[i][col-1]=prev;
				prev=cur;
				
			}
			col--;
			if(m<row)
			{
			
			for(int i=col-1;i>=n;i--)
			{
				cur=a[row-1][i];
				mat[row-1][i]=prev;
				prev=cur;
								
			}
			}
			row--;
			
			if(n<col)
			{
			for(int i=row-1;i>=m;i--)
			{
				cur=a[i][n];
				mat[i][n]=prev;
				prev=cur;
				
			}
				
			}
				n++;
			
		}
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
		{
			cout<<mat[i][j]<<" ";
		}
		
		cout<<endl;
	}
	
	
	
	
	return 0;
}
