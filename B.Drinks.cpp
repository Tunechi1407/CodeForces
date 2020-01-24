#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ar[n];
	double s=0;
	for(int z=0;z<n;z++)
	{
		cin>>ar[z];
		s+=ar[z];
	}
	cout<<fixed<<setprecision(12)<<s/n;
	return 0;
}