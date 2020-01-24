#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int ans=0;
	for(int z=0;z<n;z++)
	{
		vector<int> v;
		for(int x=0;x<3;x++)
		{
			int a;
			cin>>a;
			v.push_back(a);
		}
		if(count(v.begin(),v.end(),1)>=2)
			ans++;
	}
	cout<<ans;
	return 0;
}
