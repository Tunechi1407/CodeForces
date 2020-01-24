#include<bits/stdc++.h>
using namespace std;

int main()
{
	int q;
	cin>>q;
	for(int z=0;z<q;z++)
	{
		uint64_t a,b,n,S;
		cin>>a>>b>>n>>S;
		if(S>(a*n+b))
		{
			cout<<"NO"<<endl;
		}
		else if(((S%n)<=b)&&((S/n)<=a))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
