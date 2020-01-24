#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int c=0;
	for(int z=1;z<=n/2;z++)
	{
		if((n-z)%z==0)
			c++;
	}
	cout<<c;
	return 0;
}