#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	map<int,int> mp;
	for(int z=1;z<=n;z++)
	{
		int a;
		cin>>a;
		mp.insert({a,z});
	}
	map<int,int>::iterator it;
	it=mp.begin();
	while(it!=mp.end())
	{
		cout<<it->second<<" ";
		it++;
	}
	return 0;
}
