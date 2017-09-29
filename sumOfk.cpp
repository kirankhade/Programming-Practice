#include <iostream>
#include <stdlib.h>
#include <set>
#include <vector>

using namespace std;
	set<int> uset;


bool findl(int el,vector <int> a)
{
	for(int i=0;i<a.size();i++)
	{
		
		if(uset.find(a[i]))
		return true;
		else
		uset.insert(a[i]-el);
		
	}
	return false;
	
	
}



int main()
{
	int n,k;
	cin>>n;
	
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter K:-"<<endl;
	cin>>k;

	cout<<findl(k,a);
	
	
	return 0;
}
