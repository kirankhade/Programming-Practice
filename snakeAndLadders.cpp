#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<bool> visited(1000,false);

void replace(vector<vector<int> > adj,int x,int y)
{
for(int i=0;i<adj.size();i++)
{
	for(int j=0;j<adj[i].size();j++)
	{
		if(adj[i][j]==x)
		adj[i][j]=y;
	}
}
}

int BFS(vector<vector<int> > adj,int s)
{
queue<int> q;
vector<int> level;
level[s]=0;
q.push(s);
visited[s]=true;
while(!q.empty())
{
	int el=q.front();
	q.pop();
	for(int i=0;i<adj[el].size();i++)
	if(visited[adj[el][i]]==false)
	{
		visited[adj[el][i]]=true;
		q.push(adj[el][i]);
		level[adj[el][i]]=level[el]+1;
		if(adj[el][i]==100)
		return level[adj[el][i]];
	}
	
	}
	return -1;	
}

int main()
{
	int t,lad,snake,x,y;
vector<vector<int> > adj(101);
for(int i=1;i<=100;i++)
{
	for(int j=1;j<=6&&(i+j)<=100;j++)
	{
		adj[i].push_back(i+j);
	}
}

cin>>t;
while(t--)
{
	cin>>lad;
	for(int i=0;i<lad;i++)
	{
		cin>>x>>y; //replace x with y;
		replace(adj,x,y);
		
	}
	cin>>snake;
	for(int i=0;i<snake;i++)
	{
		cin>>x>>y;//replace x with y
		replace(adj,x,y);
	}
	
	cout<<BFS(adj,1);
}
return 0;
}
