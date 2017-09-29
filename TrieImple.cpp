	#include<iostream>
	#include<bits/stdc++.h>
	
	
	using namespace std;
	
	
	struct Node{
		
		char ch;
		map<char,Node *> children;
		bool isLeaf;
			
	};
	
	Class Trie{
	
	public:
		Trie(){
			head.ch=-1;
		};
		~Trie();
		
		void build_tire(string words[],int length);
		void insert(string word);
		void search(string word,bool &result);
		
		void print_tree(map<char,Node *> tree);
		
		void print();
		
		protected:
			Node head;
			
			vector<Node *> children; //For memory release
			
		};
		
		Trie::~Trie()
		{
			for(int i=0;i<children.size();i++)
			{
				delete children[i];
			}
			
			
		}
		
	void Trie:: build_trie(string words[],int length){
		
		for(int i=0;i<length;i++)
		{
			insert(words[i]);
				
		}
		
		
	}
	void Trie:: insert(string word){
		map<char,Node *> *current=&head.children;
		map<char,Node *>::iterator it;
		
		for(int i=0;i<word.length();i++)
		{
			char ch=word[i];
			if(it=current->find(ch)!=current->end())
			{
				current=&it->second->children;
				continue;
			}
			
			if(it==current->end())
			{
				
				Node *new_node=new Node();
				new_node->ch=ch;
				(*current)[ch]=new_node;
				current=&new_node->children;
				
				children.push_back(new_node);
			}
			
			}	
		
	}
	void Trie ::search(string word,bool &result){
		
		
		
	}
		
	void Trie :: print_tree(map<char,Node *> tree){
		
		
	}
		
	void Trie ::print(){
		
		
	}
		
	
	
	
	
	
	
	
	
	
	
	}
	

