#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n==1)
        {cout<<1; return 0;}
	int ar[n][n];
	int ans;
	for(int z=0;z<n;z++)
	{
		ar[0][z]=1;
		ar[z][0]=1;
	}
	for(int z=1;z<n;z++)
	{
		for(int y=1;y<n;y++)
		{
			ar[z][y]=ar[z-1][y]+ar[z][y-1];
			if(z==(n-1)&&y==(n-1))
				ans=ar[z][y];
		}
	}
	cout<<ans;
	return 0;
}
