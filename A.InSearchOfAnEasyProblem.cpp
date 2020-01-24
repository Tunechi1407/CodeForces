#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int f=1;
	for(int z=0;z<n;z++)
	{
		int a;
		cin>>a;
		if(a==1)
			{f=0; break;}
	}
	if(f)
		cout<<"EASY";
	else
		cout<<"HARD";
	return 0;
}
