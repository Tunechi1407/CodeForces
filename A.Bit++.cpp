#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x=0;
	for(int z=0;z<n;z++)
	{
		string s;
		cin>>s;
		if(s[1]=='+')
			x++;
		else if(s[1]=='-')
			x--;
	}
	cout<<x;
	return 0;
}