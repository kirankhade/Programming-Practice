#include <iostream>
#include <vector>
using namespace std;

    int n;
   vector <int> arr(10000);
   vector <int> tree(10000);
   
   
   void buildTree(int node,int l,int r)
   {
       if(l==r)
       {
           tree[node]=arr[l];
       }
       else{
       
       int mid=(l+r)/2;
       buildTree(node*2,l,mid);
       buildTree(node*2+1,mid+1,r);
       tree[node]=tree[node*2]+tree[node*2+1];
       }
   }
   
   void update(int node,int l,int r ,int val)
   {
       if(l==r)
       {
           tree[node]+=val;
       }
       else
       {
        int mid=(l+r)/2;
       update(node*2,l,mid,val);
       update(node*2+1,mid+1,r,val);
       tree[node]=tree[node*2]+tree[node*2+1];
           
       }
   }
   
   int query(int node,int low,int high,int l ,int r )
   {
       if(r<low||l>high)
        return 0;
    if(l<=low&&r<=high)
        {
            return tree[node];
        }
     int mid = (low + high) / 2;
    int p1 = query(2*node, low, mid, l, r);
    int p2 = query(2*node+1, mid+1, high, l, r);
    return (p1 + p2);
       
       
   }
   


int main()
{
   int q;
   cin>>n>>q;
   int m,n,x,y;
   char c;
   //vector <int> arr(n);
   //vector <int> tree(n+1);
   for(int i =1;i<=n;i++)
   {
       cin>>arr[i];
       
   }
   buildTree(1,1,n);
  
   cout<<"tree builded"<<endl;
   for(int i=0;i<q;i++)
   {    cin>>c;
   cout<<c;
    if(c=='q')
    {
       cin>>m>>n;
       cout<<query(1,1,n,m,n-1);
    }
    if(c=='u')
    {
       cin>>x>>y;
       update(x,1,n,y);
    }
       
   }
   //cout<<query(1,0,n,1,5);
   
   
   
    return 0;
}

