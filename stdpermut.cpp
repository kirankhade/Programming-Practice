#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void permute(int n)
{
	vector<int> perm;
	for(int i=1;i<=n;i++)
	{
		perm.push_back(i);
	}
	
	do{
		for(int i=0;i<perm.size();i++)
		cout<<perm[i]<<" ";
		cout<<endl;
	}while(next_permutation(perm.begin(),perm.end()));
}

int main()
{
	int n;
	cout<<"perm upto";
	cin>>n;
	permute(n);
	return 0;
}


