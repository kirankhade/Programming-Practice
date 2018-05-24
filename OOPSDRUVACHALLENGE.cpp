#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string.h>
#include <map>
#include <set>

using namespace std;

class Solution{
private:
	multimap<string,pair<string,int>> app;
	map<string,int> apiList;
	map<string,bool> isOld;
	string fileName;
public:
	Solution(const string&file);//constructor taking filename as param.
	set<string> getOldApiApps(); // get list of all apps which are using old apis
	void fillNecessaryDS(vector<string>& tokens); //perform all necessary bookeeping
	vector<string> getStringTokens(const string& line); //convert line to tokens or words
	void fileProcessing(const string& fileName); //handles all file related activities
};

Solution::Solution(const string &file):fileName(file)
{
	
}
set<string> Solution::getOldApiApps()
{
	set<string> s;	
	for(auto ap:app)
	{
		string apiName = ap.second.first;
		int ver = ap.second.second;
		if(isOld[apiName]==true && apiList[apiName]==ver) //insert into set if using oldest api 
		s.insert(ap.first);
	}
	return s;
	
}	

void Solution::fillNecessaryDS(vector<string>& tokens)
{
	if(tokens.size() == 0)
	return;
	string appName = tokens[0];
	string api = tokens[1];
	string version = tokens[2].erase(0,2); //remove first 2 chars
	int ver = stoi(version); //convert version to int
	app.insert(make_pair(appName,make_pair(api,ver)));
	
	auto it=apiList.find(api);

		if(it!= apiList.end())
		{
			if(it->second>ver)
			{
			apiList[api]=ver;		
			}
			isOld[api]=true;
		}
		else
		{
			apiList.insert(make_pair(api,ver));
			isOld.insert(make_pair(api,false));
		}
		return;
	
}

vector<string> Solution::getStringTokens(const string& line)
{
    vector<string> tokens;
    stringstream stream(line);
    string token;
    while(getline(stream, token, ','))
    {
        tokens.push_back(token);
    }
return tokens;        
}

void Solution::fileProcessing(const string& fileName)
{
 ifstream instream(fileName);
  if(!instream) {
    cout << "Unable to open input file.\n";
    return ;
  }
  char str[255];
  while(instream) {
   instream.getline(str, 255);   
   string line(str);
   vector<string> tokens = getStringTokens(line);
   fillNecessaryDS(tokens);
  }
  instream.close();
  return;
}

int main(int argc,char **argv)
{
	string fileName = "input.txt";// we can intitialize using command args..
	
	Solution s1(fileName);
	s1.fileProcessing(fileName);

	set<string> setOfApps= s1.getOldApiApps();
	for(const auto& appName:setOfApps)
	{
		cout<<appName<<endl;
	}
  return 0;
}
