#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	cin>>s;
	string ans="";
	map<char,int> mp;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='W')
		{
			if(!mp.empty())
				ans=ans+(char)(mp['B']+'0');
			mp.clear();
		}
		else if(s[i]=='B')
		{
			if(mp.find('B')!=mp.end())
				mp['B']++;
			else
				mp.insert({'B',1});
		}
		if(i==s.length()-1&&(!mp.empty()))
			ans=ans+(char)(mp['B']+'0');
	}
	cout<<ans.length()<<endl;
	for(int i=0;i<ans.length();i++)
		cout<<ans[i]<<" ";
	return 0;
}
