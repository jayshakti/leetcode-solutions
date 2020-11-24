#include <bits/stdc++.h>
using namespace std;
void helper(string str)
{
	          unordered_map<char,vector<int>> map;
	          int n = str.length();
	          for(int i=0;i<n;i++)
	                    map[str[i]].push_back(i);
			  int j=0; //counter for checking the more than 1 odd characters	        
	          for(auto i:map)
	          {
	                    if(i.second.size() % 2 == 1)
	                              j++;
	          }
	          if(j>1)
			  {
					  cout<< -1 ;
	                    return;
			  }
	          int start = 0;
	          int end = n-1;
	          int a[n];
	          for(int i=0; i<26; i++)
	          {
	                    char ch = char(i+97);
	                    for(int j=0; j<map[ch].size() ; j+=2)
	                    {
	                              if((map[ch].size() - j) ==1)
	                              {
										  a[n/2] = map[ch][j];
	                              }
								  else
								  {
	                              	a[start] = map[ch][j];
	                              	a[end] = map[ch][j+1];
									start++;
									end--;
								  }
	                   	}
	          }
	          for(int i=0; i<n; i++)
	          cout<<a[i]+1<<' ';
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	          string str;
	          cin>>str;
			  helper(str);
	          cout<<endl;
	}
	return 0;
}

