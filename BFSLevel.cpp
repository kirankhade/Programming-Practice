#include <iostream>
#include <vector>
#include <queue>


using namespace std;

vector<int> adj[100000];
vector<int> level(10000);
vector<bool> visited(10000,false);

void BFS(int N,int s)
{
    //level[0]=1;
    level[1]=1;
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(!q.empty())
    {
        int v=q.front();
       // cout<<v<<" ";
        q.pop();
        for(int i=0;i<adj[v].size();i++)
        {
            if(visited[adj[v][i]]==false)
            {
                q.push(adj[v][i]);
                level[adj[v][i]]=level[v]+1;
                visited[adj[v][i]]=true;
            }
        }
        
    }
    
    
}



int main()
{
    //cout << "Hello World!" << endl;
    int N;
    int x,y,el;
    cin>>N;
    for(int i=1;i<N;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cin>>el;
    for(int i=1;i<N;i++)
    {
        if(visited[i]==false)
        BFS(N,i);
    }
    cout<<level[el]<<endl;
    
   // for(int i=0;i<N;i++)
   // cout<<level[i]<<" ";
    
    
    return 0;
}

