	#include <iostream>
	#include <vector>
	using namespace std;
	
	int n,m;
	bool adj[100][100];
	vector<bool> vis(100,false);
	vector<int> low(100,0);
	vector<int> disc(100,0);
	vector<bool> ap(100,false);
	//vector<pair<int,int>> bridge;
	vector<int> parent(100,-1);
	
	int min(int a,int b)
	{
		return a>b?b:a;
	}
	
	void Dfs(int s,int tim)
	{   
	    int child=0;
	    cout<<"inside dfs";
	    vis[s]=true;
	    disc[s]=low[s]=tim+1;
	    for(int i=0;i<n;i++)
	    {
	    	if(adj[s][i]==true)
	    	{
			
	        if(vis[i]==false)
	        {
	            parent[i]=s;
	            child++;
	            Dfs(i,tim++);
	            low[s]=min(low[s],low[i]);
	            if(parent[s]==-1&&child>1)
	            {
	                ap[s]=true;
	            }
	            if(parent[s]!=-1&&disc[s]<=low[i])
	            {
	                ap[s]=true;
	            }
	            
	        
	        
	        }
	        
	        else if(parent[s]!=i)
	        {
	           low[s]= min(disc[i],low[s]);
	            
	        }
	    }
	        
	    }
	    
	    
	    
	}
	
	
	
	int main()
	{
	    //cout << "Hello World!" << endl;
	    int t,x,y;
	    cin>>n>>m;
	    
	    for(int i=0;i<m;i++)
	    {
	        cin>>x>>y;
	        adj[x][y]=true;
	        adj[y][x]=true;
	        
	    }
	    
	    Dfs(1,0);
	    
	    for(int i=0;i<n;i++)
	    {
	        if(ap[i]==true)
	        cout<<i<<" ";
	    }
	    
	    
	    return 0;
	}

