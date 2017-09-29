#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1000];
vector<int> lev(1000,0);
vector<int> parent(1000,0);
vector<int> depth(1000,1);
vector<int> subtree(1000,0);
vector<int> traverse;
vector<int> pathSum(1000,0);
vector<int> cost(1000,0);

void dfs(int V,int pV)
{
	traverse.push_back(V);
	parent[V]=pV;
	subtree[V]=1;
	depth[V]=depth[pV]+1;
	pathSum[V]=cost[V];
	for(auto v:adj[V])
	{
		
		if(v!=pV)
		{
		level[v]=level[V]+1;
		pathSum[v]+=pathSum[V];
		dfs(v,V);
		subtree[V]+=subtree[v];
		
		}
	}
}




int main()
{
	int n,e;
	cin>>n>>e;
	for(int i=1;i<=n;i++)
	{
		cin>>cost[i];
	}
	
	for(int i=0;i<e;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	
	void dfs(1,0);
	return 0;
}
