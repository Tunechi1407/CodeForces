#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int stof=0,ftos=0;
	for(int z=1;z<n;z++)
	{
		if(s[z]=='S'&&s[z-1]=='F')
			ftos++;
		else if(s[z]=='F'&&s[z-1]=='S')
			stof++;
	}
	if(stof>ftos)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
