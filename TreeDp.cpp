#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std

vector<int> dp1(100,0);
vector<int> dp2(100,0);
vector<bool> visited(100,false);
vector<int> cost(100,0);

void dfs(int V,int pV)
{
	int sum1=0,sum2=0;
	
	for(int i=0;i<adj[V].size();i++)
	{
		if(visited[adj[V][i]]==false)
		{
			if(adj[V][i]==pV)
			continue;
			dfs(adj[V][i],V);
				
		sum1+=dp2[V];
		sum2+=max(dp1[V],dp2[V]);
		}
	}
	dp1[V]=cost[V]+sum1;
	dp2[V]=sum2;	
	
}

int main()
{
	
	
	return 0;
}
