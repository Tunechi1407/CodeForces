#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int ans;
	while(k>0)
	{
		if(n%10==0)
		{
			n=n/10;
		}
		else
		{
			n--;
		}
		k--;
	}
	cout<<n;
	return 0;
}