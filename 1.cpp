#include<iostream>
#include<vector>

using namespace std;

vector<int> adj[10];
int main()
{
	
	int edges,vertices,x,y;
	
	cout<<"Enter no of edges and vertices:";
	
	cin>>edges>>vertices;
	
	
	for(int i=1;i<=edges;i++)
	
	{
		cin>>x>>y;
		
		adj[x].push_back(y);
		
	}
	
	for(int i=1;i<=vertices;i++)
	{	
		cout<<"adjlist of node "<<i<<":";
		for(int j=0;j<adj[i].size();j++)
		{
			if(j==adj[i].size()-1)
			cout<<adj[i][j]<<endl;
			else
			cout<<adj[i][j]<<"-->";
		}
		cout<<endl;
	}
	
	
	
	
	
	return  0;
	
	
}
