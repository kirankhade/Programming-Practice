#include<iostream>
#include<vector>
#include<stdlib.h>
#include<utility>


using namespace std;


int  main()
{
	typedef pair<int,int> pp;
    vector < pair < pp , int > > list[5];
//vector<int> list;
	int s,d,w;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter five pairs with wt";
		cin>>s>>d>>w;
		list[s].push_back(make_pair(make_pair(s,d),w));
		
	}
//	for(int i=0;i<5;i++)
//	{
//		for(int j=0;j<list[i].size();j++)
//		{
//			cout<<"Source :";
//			cout<<list[i]<<endl;
//			
//		}
//		
//	}
for( const pair< pair<int,int> ,int > &ref : list[0] )
{
  cout<<ref.first<<endl;
  cout<<ref.second<<endl;
}
	
	
	
	
	return 0;
}
