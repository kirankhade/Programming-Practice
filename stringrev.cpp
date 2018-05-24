#include<iostream>
#include<string>
using namespace std;


int main()
{
	string A="the sky is blue";
	string s;
	int i=A.length();
	for(int i=A.length()-1;i>=0;i--)
	{
		
		while(A[i]==' '&&i>=0)
		i--;
		int end=i+1;
		cout<<"beg"<<i<<endl;
		
		while(A[i]!=' '&&i>=0)
		i--;
		int beg =i;
		i++;
		s.append(A.begin()+beg,A.begin()+end);
	
		cout<<"end"<<i<<endl;
		
	}
	cout<<s<<endl;
}
