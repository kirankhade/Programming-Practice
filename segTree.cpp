#include<iostream>
#include<vector>
#include<stdlib.h>


using namespace std;


int arr[20];
int tree[200];

void build(int,int,int);
int max(int,int);
int query(int,int,int,int,int);
void update(int,int,int,int,int,int);



int main()
{
	int l,m,n;
	cout<<"Enter no of elm:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	build(1,1,n);
	cout<<endl<<query(1,1,n,2 ,6);
	cout<<endl<<"Enter value by which u want to update:-";
	cin>>l;
	update(1,1,n,2,6,l);
	cout<<endl<<query(1,1,n,2 ,6);
	
}

void build(int node,int a,int b)
{
	if(a>b)
	return;
	if(a==b)
	{
		tree[node]=arr[a];
		return;
	}
	build(node*2,a,(a+b)/2);
	build(node*2+1,(a+b)/2+1,b);
	tree[node]=max(tree[node*2],tree[node*2+1]);
		
}

void update(int node,int a, int b ,int i, int j, int val)
{
	if(a>b||a>j||b<i)
	return;
	if(a==b)
	{
		tree[node]+=val;
		return;
	}
	
	update(node*2,a,(a+b)/2,i,j,val);
	update(node*2+1,(a+b)/2+1,b,i,j,val);
	
	tree[node]=max(tree[node*2],tree[node*2+1]);
	
	
}

int max(int a,int b)
{
	return a>b?a:b;
	
}

int query(int node,int a,int b,int i,int j)
{
	if(a>b||a>j||b<i)
	return 0;
	if(a >= i && b <= j)
	return tree[node];
	
	int q1=query(node*2,a,(a+b)/2,i,j);
	int q2=query(node*2+1,(a+b)/2+1,b,i,j);
	
	return max(q1,q2);
	
	
}
