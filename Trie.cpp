#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
	map <char,node *> m;
	bool isfinal;
	
};


/*
void insert1(string s,struct node *root)
{
	int i=0;
	
	while(root->m.first==s[i])
	{
		i++;
		root=root->m->second;
	}
	if(i==s.length())
	{
		root->isfinal=true;
	}
	else
	{
		while(i!=s.length())
		{
			node *temp=new node;
			temp->m.first=s[i];
			root->m.second=temp;
			root=root->m.second;
			i++;
		}
		root->isfinal=true;
	}
	
}*/

int main()
{
	node *root,*temp;
	temp->m.insert('w',temp);
	root->isfinal=true;
	root->m.emplace('c',temp);
	
	//insert1("hi",root);
	
	
	return 0;
}
