	#include <iostream>
	#include <vector>
	#include <stack>
	
	using namespace std;
	
	int main() {
		// your code goes here
		int n,max=0,cmax=-1,pos;
		cin>>n;
		vector<int> arr(n);
		stack<int> s;
		for(int i=0;i<n;i++)
		{
		    cin>>arr[i];
		}
		
		for(int i=0;i<n;i++)
		{
		    if(arr[i]==1)
		    {
		    s.push(arr[i]);
		    max++;
		    	if(max>cmax)
		    {
		        cmax=max;
		        pos=i+1;
		       // cout<<pos<<" ";
		    }
		    }
		    else
		    {
		        s.pop();
		        max--;
		    }
	
		    
		}
		cout<<endl;
		cout<<cmax<<" "<<pos;
		
		return 0;
	}

