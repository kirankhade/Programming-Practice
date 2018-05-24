#include<iostream>
#include<string>

using namespace std;

string rev(string line)
{
	if(line == "")
	return "";
	else 
	return rev(line.substr(1))+line[0];
}

int countSpaces(string line)
{
	if(line == "")
	return 0;
	else
	return countSpaces(line.substr(1))+(line[0]==' '?1:0);
}

int lastOccurenceOfChar(string line,char ch)
{

	if(line[line.length()-1] == ch)
	 return line.length()-1;
	 else if(line.length() == 0)
	 return -1;
	 else
	 return lastOccurenceOfChar(line.substr(0,line.length()-1),ch);

	
}
/*

int choose(int n,int k)
{
	if(n == 0 || n == k)
	return 1;
	return (choose(n-1,k-1) + choose(n,k-1));
}

void printArrayPerm(int *arr,int n,int start)
{
	printArray(arr);
	
	for(int i=start+1;i<arr.size();i++)
	{
		swap(arr,i,start);
		printArrPerm(arr,n,start+1);
		swap(arr,i,start);
		
	}
	
}
*/
int main()
{
	string s("H e l lo");
	
	cout<<"reversed string is:"<<endl;
	cout<<rev(s);
	cout<<endl<<"no of spaces in string"<<endl<<countSpaces(s);
	cout<<endl<<"Last occurence of char"<<endl<<lastOccurenceOfChar(s,'H');
}
