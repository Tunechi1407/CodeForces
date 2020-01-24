#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int z=0;z<n;z++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	int s=0;
	for(int z=0;z<n;z++)
	{
		s=s+v[n-1]-v[z];
	}
	cout<<s;
	return 0;
}