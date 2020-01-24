#include<bits/stdc++.h>
using namespace std;

int main()
{
	map<int,int> mp;
	for(int z=1;z<=4;z++)
	{
		int a;
		cin>>a;
		mp.insert({z,a});
	}
	string s;
	cin>>s;
	int c=0;
	for(int z=0;z<s.length();z++)
	{
		c=c+mp[(int)(s[z]-'0')];
	}
	cout<<c;
	return 0;
}
