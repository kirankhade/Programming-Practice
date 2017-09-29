#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector> 
#include <list>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdlib>
#include <cmath>
#include <cstdio>
#include <fstream>
#include <ctime>
#include <cassert>

using namespace std; // }}}
vector<bool> visited(1000,false) ;

int dfs(int v,int y,vector < vector <int> > pairs,int N)
    {
    visited[v]=true;
    for(int i=0;i<pairs[v].size();i++)
        {
        if(visited[pairs[v][i]]==false)
            {
            y=1+dfs(visited[pairs[v][i]],y,pairs,N);
        }
    }
    
    return y;
    
}


int main()
{ 
    int N, I;
    cin >> N >> I;
    
    vector<vector<int> > pairs(N);
    vector<int> ans(100);
    for (int i = 0; i < I; ++i) {
        int a, b;
        cin >> a >> b;
        pairs[a].push_back(b);
        pairs[b].push_back(a);
    }
 
    long long result = 0;
    
    /** Write code to compute the result using N,I,pairs **/
    for(int i=1;i<=N;i++)
        {
        if(visited[i]==false)
            {
            ans.push_back(dfs(i,0,pairs,N));
        }
    }
    for(int i=0;i<ans.size()-1;i++)
        {
        result+=ans[i]*ans[i+1];
    }
    
    
    
    
    cout << result << endl;
    return 0;
}


