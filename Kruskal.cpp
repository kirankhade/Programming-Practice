#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

pair<long long,pair<int,int>> p[10005];
int id[10005];

void initialise(int n)
{
    for(int i=0;i<10005;i++)
    {
        id[i]=i;
    }
}

int root(int x)
{
    while(id[x]!=x)
    {
        id[x] = id[id[x]];
        x = id[x];
    
    }
    return x;
}

void unioon(int x,int y)
{
    int p=root(x);
    int q=root(y);
    id[p]=id[q];
    
}

long long kruskal(int m)
{
  long long cost=0;
   for(int i=0;i<m;i++)
   {
       int l=p[i].second.first;
       int m=p[i].second.second;
      long long c=p[i].first;
       if(root(l)!=root(m))
       {
           cost+=c;
           unioon(l,m);
       }
   }
   return cost;
    
}



int main()
{
//    cout << "Hello World!" << endl;
  long long n,m,x,y,cost;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y>>cost;
        p[i]=make_pair(cost,make_pair(x,y));
        
        
    }

    sort(p,p+m);
    initialise(n);
    
    
    cout<<kruskal(m)<<endl;



    return 0;
}

