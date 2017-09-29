#include<iostream>
#include<stdlib.h>
#include<vector>



using namespace std;

vector<int> a(10000);

int Bsf(int low,int high,int el)
{
	if(low<=high)
	{
		int mid=(low+high)/2;
		if(mid==0||a[mid]==el&&a[mid-1]<el)
		return mid;
		else if(a[mid]<el)
		return Bsf(mid+1,high,el);
		else
		return Bsf(low,mid-1,el);
				
	}
	
	return -1;
	
}
 
int Bsl(int low,int high,int el)
{
	if(low<=high)
	{
		int mid=(low+high)/2;
		if(mid==high-1||a[mid]==el&&a[mid+1]>el)
		return mid;
		else if(el<a[mid])
		return Bsl(low,mid-1,el);		
		else
		return Bsl(mid+1,high,el);
	
				
	}
	
	return -1;
	 
}





int main()
{
	int n,el;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Element to be counted:";
	cin>>el;
	cout<<"fOcurrence is:"<<Bsf(0,n,el)<<endl;
	cout<<"lAST OCUURENCR 	is:"<<Bsl(0,n,el);
	
	return 0;
}
