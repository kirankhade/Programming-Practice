#include<iostream>
#include<stdlib.h>
#include<vector>


using namespace std;


class Graph{
	int vertices;
	int edges;
	public:
		Graph(int,int);
		void addEdge(int,int);
		void displayGraph(int,int);
		bool isConnected(int,int);
			
	
	
};
Graph::Graph(int e,int v)
{
	edges=e;
	vertices=v;
}
typedef pair<int,int> pp;
vector <<pp>,int> adjList[];

int main()
{
	int edges,vertices,s,d,weight;
	cout<<"Enter no of vertices and edges:";
	cin>>edges>>vertices;
	Graph g(edges,vertices);
	for(int i=0;i<edges;i++)
	{
		cout<<"Enter Edge in source,dest,weight format ";
		cin>>s>>d>>weight;
		adjList[s].push_back(make_pair(s,d),weight);
	}
	g.displayGraph(edges,vertices);
	
	
	return 0;
	
}


