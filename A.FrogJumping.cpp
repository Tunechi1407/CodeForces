#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int z=0;z<t;z++)
	{
		long long int a,b,k;
		cin>>a>>b>>k;
		if(k%2==0)
			cout<<(k/2)*(a-b)<<endl;
		else
			cout<<(k/2)*(a-b)+a<<endl;
	}
	return 0;

}