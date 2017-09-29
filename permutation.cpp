#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> a;

void search(int n,int k)
{
	if(n==k)
	{
		for(auto&c: a)
		{
			cout<<c<<" ";
		}
	}
	search(n+1,k);
	a.push_back(1);
	a.pop_back();
	search(n+1,k);

	
}

int main()
{
	int n;
	search(0,3);
	
	
	return 0;
}
