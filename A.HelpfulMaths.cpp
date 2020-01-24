#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	vector<int> v;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='+')
		{
			v.push_back((int)(s[i]-'0'));
		}
	}
	sort(v.begin(),v.end());
	for(auto it=v.begin();it!=v.end();it++)
	{
		if(++it==v.end())
		{
			--it;
			cout<<*it;
			break;
		}
		else
		{
			it--;
			cout<<*it<<"+";
		}
	}
	return 0;
}