#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<char> v;
	int i=0;
	for(int z=0;z<s.length();z+=i)
	{
		v.push_back(s[z]);
		i++;
	}
	vector<char>::iterator it;
	it=v.begin();
	while(it!=v.end())
	{
		cout<<*it;
		it++;
	}
	return 0;
}
