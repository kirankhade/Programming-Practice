

int ans(Node *root)
{
	if(root->children.size()==0)
	return root->cost;
	
	int min_cost =INT_MAX;
	
	for(int i=0;i<root->children.size();i++)
	{
		temp_cost= ans(root->children[i]);
		min_cost =min(temp_cost,min_cost);
	}
	
	return min_cost + root->cost;
}
