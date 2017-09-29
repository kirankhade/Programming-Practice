	#include<iostream>
	#include<string>
	#include<math.h>
	
	using namespace std;
	
	
	int main()
	{
		long long int l,no=0;
		string s="31415926535897932384626433832795";
	
		
		        for(int i=s.length()-1,j=0;i>=0;i--,j++)
	            {
	            l=(int)s[i]-48;
	            no=no+(pow(10,j)*l);
	         
	        }
	        cout<<no;
		
		return 0;
	}
