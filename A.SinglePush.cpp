/*#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int x=0;x<T;x++)
	{
		int n;
		cin>>n;
		vector<int> va;
		vector<int> vb;
		for(int x=0;x<n;x++)
			{int a; cin>>a; va.push_back(a):}
		for(int x=0;x<n;x++)
			{int a; cin>>a; vb.push_back(a);}
		vector<int> diff;
		for(int x=0;x<n;x++)
			diff.push_back(vb[x]-va[x]);
		for(int x=1;x<n-1;x++)
		{
			
		}
	}
}
*/










/*#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	for(int z=0;z<T;z++)
	{
		int n,f;
		cin>>n;
		int a[n],b[n];
		set<int> st;
		for(int x=0;x<n;x++)
			cin>>a[x];
		for(int x=0;x<n;x++)
			cin>>b[x];
		for(int x=0;x<n;x++)
			st.insert(b[x]-a[x]);
		set<int>::iterator it;
		vector<int> v;
		for(auto it=st.begin();it!=st.end();it++)
            v.push_back(*it);
        sort(v.begin(),v.end());
        auto it2=v.begin();
		if(v.size()<=2&&*it2>=0)
			f=1;
		else f=0;
		if(f)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
*/