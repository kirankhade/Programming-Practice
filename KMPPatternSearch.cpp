#include<iostream>
#include<vector>

using namespace std;
//permutation,sustri,subset,n-queen,strperm,combn

//kmp search alg


vector<int> computeLPS(string pat)
{
	vector<int> lpsArr(pat.length(),0);
	
	lpsArr[0] = 0;
	int len =0;
	int i=1;
	while(i<pat.length())
	{
		if(pat[i] == pat[len])
		{
			len++;
			lpsArr[i] = len;
			i++;	
		}
		else{
			if(len!=0)
			{
				len = lpsArr[len-1];
			}
			else
			{
				lpsArr[i] = 0;
				i++;	
			}
		}
	}
	
		for(auto el:lpsArr)
	{
		cout<<el<<" ";
	}
	
	return lpsArr;
}

kmp(string text,string pat)
{
	vector<int> lps = computeLPS(pat);

	cout<<endl;
	int i=0,j=0;
	
	while(i<text.length())
	{
		if(pat[j]==text[i])
		{
			i++;
			j++;
		}
		
		if(j == pat.length())
		{
			cout<<endl<<"Pattern found at index "<<i -j;
			//i++;
			j = lps[j-1];
		}
		
		else if(i<text.length() && pat [j]!= text[i] ){
			if(j!=0)
			{
				j = lps[j-1];
			}
			else{
				i++;
			}
		}
	}
	
	
	
	
}

int main()
{
	string pat,text;
	cin>>text;
	cin>>pat;
	kmp(text,pat);
	
	
	return 0;
}
