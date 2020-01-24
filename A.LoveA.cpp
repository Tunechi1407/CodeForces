#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int c=0;
	for(int z=0;z<s.length();z++)
	{
		if(s[z]=='a')
			c++;
	}
	if(((c*2)-1)>s.length())
		cout<<s.length();
	else
		cout<<((c*2)-1);
	return 0;
}
