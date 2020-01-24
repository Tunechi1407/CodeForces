#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,h;
	cin>>n>>h;
	int ar[n];
	int c=0;
	for(int z=0;z<n;z++)
	{
		cin>>ar[z];
		if(ar[z]<=h)
			c++;
		else
			c+=2;
	}
	cout<<c;
	return 0;
}