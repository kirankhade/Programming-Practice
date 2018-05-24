#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> CompZArray(string s)
{
	vector<int> z(s.length());
	int l,r,k,n;
	n = s.length();
	l=r=0;
	k=0;
	for(int i=1;i<s.length();i++)
	{
		if(i>r)
		{
			l = r= i;
			while(r<n&&s[r-l]==s[r])	
			r++;
			z[i] = r-l;
			r--;	
		}
		else{
			//two cases either prev z or compute new
			k = i-l ;
			
			if(z[k] < (r-i+1))
			z[i] = z[k];
			else
			{
				l=i;
				while(r<n&&s[r-l]==s[r])
				r++;
				z[i] =r-l;
				r--;
			}
			
		}
	}
	
	return z;
	
}

ZAlgo(string text,string pat)
{
	string con = pat+"$"+text;
	vector<int> zArr = CompZArray(con);
	
	for(int i=0;i<zArr.size();i++)
	{
		if(zArr[i] == pat.length())
		cout<<"pattenr found at :"<<(i-pat.length()-1)<<endl;
	}
	
}


int main()
{
    string text = "GEEKS FOR GEEKS";
    string pattern = "GEEK";
ZAlgo(text,pattern)	;
	
	
	return 0;
}

