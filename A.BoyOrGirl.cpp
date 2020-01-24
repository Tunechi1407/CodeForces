#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s; cin>>s;
	set<char> st;
	for(int z=0;z<s.length();z++)
	{
		st.insert(s[z]);
	}
	if(st.size()%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
	return 0;
}