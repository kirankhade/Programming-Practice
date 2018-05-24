#include<iostream>

using namespace std;

struct Node {
	Node(int n)
	{
		data = n;
		next = NULL;
	}
	int data;
	Node * next;
};

void printList(Node *head)
{
	while(head)
	{
		cout<<head->data<<" ";
		head =head->next;
	}
	cout<<endl;
}

void printRevRec(Node *head)
{
	if(head)
	{
	printRevRec(head->next);
	cout<<head->data<<" ";
	}
}

Node * reverseList(Node * head)
{
	Node *cur,*next,*prev;
	prev =next =NULL;
	cur = head;
	while(cur)
	{
		next = cur->next;
		cur->next =prev;
		prev =cur;
		cur =next;
	}
	
	return prev;
}

Node * reverseInChunks(Node * head,int n)
{
	Node *cur,*next,*prev;
	prev =next =NULL;
	cur = head;
	int k = 0;
	while(cur&&k<n)
	{
		next = cur->next;
		cur->next =prev;
		prev =cur;
		cur =next;
		k++;
	}
	
	if(head)
	{
		head->next = reverseInChunks(cur,n);
	}
	
	return prev;
}


int main()
{
	Node * head = new Node(1);
	head->next =new Node(2);
	head->next->next =new Node(3);
	head->next->next->next =new Node (4);
 	head->next->next->next->next =new Node (5);
 	head->next->next->next->next->next =new Node (6);
 	head->next->next->next->next->next->next =new Node (7);
 	head->next->next->next->next->next->next->next =new Node (8);
 	
	cout<<"Original List"<<endl;
	printList(head);
	
	cout<<"List after rec rev"<<endl;
	printRevRec(head);		
//	cout<<"List after rev"<<endl;
//	printList(reverseList(head));
	
	cout<<endl<<"List after rev in chunks"<<endl;
	printList(reverseInChunks(head,3));
	return 0;
}
