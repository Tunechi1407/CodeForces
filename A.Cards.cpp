#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int c0=0,c1=0;
	for(int z=0;z<n;z++)
	{
		if(s[z]=='z')
			c0++;
		else if(s[z]=='n')
			c1++;
	}
	for(int z=0;z<c1;z++)
	{
		cout<<"1 ";
	}
	for(int z=0;z<c0;z++)
	{
		cout<<"0 ";
	}
	return 0;
}