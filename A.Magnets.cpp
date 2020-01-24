#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int z=0;z<n;z++)
	{
		cin>>ar[z];
	}
	int c=0;
	for(int z=1;z<n;z++)
	{
		if(ar[z]!=ar[z-1])
			c++;
	}
	cout<<++c;
	return 0;
}