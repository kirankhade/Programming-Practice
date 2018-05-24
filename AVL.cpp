#include<iostream>
#include<vector>

using namespace std;

class Node{
	public:
	Node(int _data):data(_data),left(NULL),right(NULL),height(1)
	{

	}
//private:	
	int data;
	Node *left;
	Node *right;
	int height;
};

int height(Node *s)
{
	if(s ==NULL)
	return 0;
	return s->height;
}

Node * rotateLeft(Node *z)
{
	Node * x = z->right;
	Node * t3 = x->left;
	x->left =z;
	z->right = t3;
	
	x->height = max(height(x->left),height(x->right))+1;
	z->height = max(height(z->left),height(z->right))+1;
	
	return x;
}

Node * rotateRight(Node *z)
{
	Node * x = z->left;
	Node * t3 = x->right;
	x->right = z;
	z->left = t3;
	
	x->height = max(height(x->left),height(x->right))+1;
	z->height = max(height(z->left),height(z->right))+1;
	
	return x;
}

int balanceFactor(Node * t)
{
	cout<<"inside balance"<<endl;
	return (height(t->left)-height(t->right));
}

Node * insert(Node *node,int key)
{
	if(node ==NULL)
	{
		return new Node(key);
	}
	cout<<"inside insert"<<endl;
	
	if(key<node->data)
	node->left = insert(node->left,key);
	else if(key>node->data)
	node->right = insert(node->right,key);
	else return node;
	node->height = max(height(node->left),height(node->right))+1;
	
	int k = balanceFactor(node);
	
	if(k>1 && key < node->left->data ) //left left
	{
		return rotateRight(node);
	}
	if(k<-1 && key > node->right->data) // right right
	{
		return rotateLeft(node);
	}
		
	if(k > 1 && key > node->left->data) //left right
	{
		node->left =(node->left);
		return rotateRight(node);	
	}
	
	if(k<-1 && key < node->right->data) // right left
	{
		node->right = rotateRight(node->right);
		return rotateLeft(node);
	}	
	return node;
}

void preorder(Node * root)
{
	if(root!=NULL)
	{
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(Node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}

int main()
{
	
	 Node *root = NULL;
 
  /* Constructing tree given in the above figure */
  root = insert(root, 10);
  root = insert(root, 20);
  root = insert(root, 30);
  root = insert(root, 40);
  root = insert(root, 50);
  root = insert(root, 25);
 
  /* The constructed AVL Tree would be
            30
           /  \
         20   40
        /  \     \
       10  25    50
  */
 
  cout<<"Preorder traversal of the constructed AVL tree is"<<endl;
  preorder(root);
  
 cout<<endl<<"Inorder traversal of the constructed AVL tree is"<<endl;
  inorder(root);
 
  return 0;

}

