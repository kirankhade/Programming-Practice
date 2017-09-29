	#include <iostream>

	using namespace std;
	
	
	int x[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	int y[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
	
	bool checkEqual(int *mat,int n,int m)
	{
		//int i=0,j=0;
	    int el = *((mat+0*m) + 0);
	    for(int i=0;i<n;i++)
	    for(int j=0;j<m;j++)
	    {
	        if(*((mat+i*m) + j)==el)
	        continue;
	        return false;
	    }
	    return true;
	}
	
	int GetMax(int *mat, int row, int col, int R,int C)
	{
	    int rd,cd;
	    int max=*((mat+row*C) + col);
	 
	    // Search word in all 8 directions starting from (row,col)
	    for (int dir = 0; dir < 8; dir++)
	    {
	        // Initialize starting point for current direction
	         rd = row + x[dir], cd = col + y[dir];
	        if (rd >= R || rd < 0 || cd >= C || cd < 0)
	        continue;
	        if(*((mat+rd*C) + cd)>max)
	        max=*((mat+rd*C) + cd);
	
	    }
	    return max;
	}
	
	
	int main() {
		// your code goes here
		int n,m,t;
		int *t1,*t2,*t3;
	
		cin>>t;
		for(int p=0;p<t;p++)
		{
		    cin>>n>>m;
		    int mat[n][m];
		    int temp[n][m];
		    
		    for(int i=0;i<n;i++)
		    for(int j=0;j<m;j++)
		    {
		        cin>>mat[i][j];
		    }
	
	    t1=(int *)mat;
	    t2=(int *)temp;
		    int count=0;
		    while(!checkEqual((int *)t1,n,m))
		    {
	
		        for(int i=0;i<n;i++)
		        for(int j=0;j<m;j++)
		        {
		            *((t2+i*m) + j)=GetMax((int *)t1,i,j,n,m);
		            
		          
		        }
		        t3=t1;
		        t1=t2;
		        t2=t3;
		        count++;
		    }
		    cout<<count<<endl;
		}
		
		return 0;
	}

