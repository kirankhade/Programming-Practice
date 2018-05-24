#include<iostream>
#include <string>
#include <vector>

using namespace std;
static int cnt =0,cnt2 = 0;
void swap(char *a ,char *b)
{
	char temp = *a;
	*a =*b;
	*b = temp;
}
void swapInt(int *a ,int *b)
{
	int temp = *a;
	*a =*b;
	*b = temp;
}

void strPermute(string s,int index)
{
	if(index == s.length()-1)
	{
		cout<<s<<endl;
		cnt++;
	}
	
	for(int i=index;i<s.length();i++)
	{
		swap(s[index],s[i]);
		strPermute(s,index+1);
		swap(s[index],s[i]);
	}	
	
}

void arrPermute(vector<int>s,int index)
{
	if(index == s.size())
	{
		for(auto el:s)
		cout<<el<<" ";
		cout<<endl;
		cnt2++;
	}
	
	for(int i=index;i<s.size();i++)
	{
		std::swap(s[index],s[i]);
		arrPermute(s,index+1);
		std::swap(s[index],s[i]);
	}	
	
}

int main()
{
	string str;
	cin>>str;
	strPermute(str,0);
	cout<<"No of perm are:"<<cnt<<endl;
	int n,m;
	cout<<"Enter no of elements:-";
	cin>>m;
	n =m;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	arrPermute(arr,0);
	
	cout<<endl<<"No of perm for array:"<<cnt2<<endl;
	return 0;
}



//permutation,sustri,subset,n-queen,strperm,combn
