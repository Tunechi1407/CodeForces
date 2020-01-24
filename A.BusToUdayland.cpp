#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s[n];
	for(int z=0;z<n;z++)
	{
		cin>>s[z];
	}
	int f=0;
	for(int z=0;z<n;z++)
	{
		for(int y=0;y<5-1;y++)
		{
			if(s[z][y]==s[z][y+1]&&s[z][y]=='O')
			{
				f=1;
				s[z][y]='+';
				s[z][y+1]='+';
				break;
			}
		}
		if(f)
			break;
	}
	if(f)
	{
		cout<<"YES"<<endl;
		for(int z=0;z<n;z++)
		{
			cout<<s[z]<<endl;
		}
	}
	else
		cout<<"NO";
	return 0;
}
