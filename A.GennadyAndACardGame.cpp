#include<bits/stdc++.h>
using namespace std;

int main()
{
	string CT;
	cin>>CT;
	string CH[5];
	for(int z=0;z<5;z++)
	{
		cin>>CH[z];
	}
	int f=0;
	for(int z=0;z<5;z++)
	{
		if((CH[z][0]==CT[0])||(CH[z][1]==CT[1]))
		{
			f=1;
			break;
		}
	}
	if(f)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}