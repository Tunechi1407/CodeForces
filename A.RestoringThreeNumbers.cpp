#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	for(int z=0;z<4;z++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	cout<<v[3]-v[0]<<" "<<v[3]-v[1]<<" "<<v[3]-v[2];
	return 0;
}