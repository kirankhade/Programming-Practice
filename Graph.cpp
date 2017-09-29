#include<iostream>
#include<stdlib.h>
#include<vector>


using namespace std;

class Graph{
	int vertices;
	int edges;
	typedef pair<int,int>pp;
	vector<pp,int> adjList[10];
	public:
		Graph(int,int);
		void addEdge(int,int);
		void displayGraph();
		bool isConnected(int,int);
	
	
};
Graph::Graph(int v,int e):vertices(v),edges(e)
{
	
}
