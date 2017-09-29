#include<iostream>
#include<vector>
#include<stdlib.h>
#include<iostream>
#include<queue>

using namespace std;

void dfs(int);
void initialize();
void bfs(int);

vector<int> adj[10];

queue <int> q;

int visited[10];

int main()
{
	
	int edges,vertices,x,y,components=0;
	
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
	
	cout<<endl;
	
	
	initialize();
	
	cout<<"DFS for graph is:-"<<endl;
	
	for(int i=1;i<=vertices;i++)
	{
		if( 0 == visited[i])
		{
		
		dfs(i);
		components++;
		}
	}
	
	cout<<endl<<"No of components are:-"<<components;
	
	initialize();
	
	cout<<"BFS of a Graph is:"<<endl;
	bfs(1);
	
	
	return  0;
	
}

void initialize()
{
	for(int i=0;i<10;i++)
	{
		visited[i]=0;
	}
}

void dfs(int s)
{
	cout<<s<<"->";
	visited[s]=1;
	for(int i=0;i<adj[s].size();i++)
	{
		if(visited[adj[s][i]]==0)
		{ 
//		cout<<adj[s][i]<<"->";
		dfs(adj[s][i]);
		}
	}
		
}

void bfs(int s)
{
	cout<<endl;
	q.push(s);
	visited[s]=1;
	cout<<s<<"-->";
//	int v;
	while(!q.empty())
	{
	int	v=q.front();
	q.pop();
	
//	cout<<v<<"-->";
	
	for(int i=0;i<adj[v].size();i++)
	{
		if(visited[i]==0)
		{
			q.push(adj[v][i]);
			cout<<adj[v][i]<<"-->";
			visited[i]=1;
		}
	}
		
	}
		
	
}
