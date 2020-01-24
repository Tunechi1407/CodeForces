#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int a1[n];
    long long int a2[n-1];
    long long int a3[n-2];
    long long int a=0,b=0,c=0;
    for(int z=0;z<n;z++)
        {cin>>a1[z]; a=a+a1[z];}
    for(int z=0;z<n-1;z++)
        {cin>>a2[z]; b=b+a2[z];}
    for(int z=0;z<n-2;z++)
        {cin>>a3[z]; c=c+a3[z];}
    cout<<a-b<<endl<<b-c;
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<pair<int,int> > v;
    for(int z=0;z<n; z++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(0,a));
    }
    for(int z=0;z<n-1;z++)
    {
        int a;
        cin>>a;
        vector<pair<int,int> >::iterator it;
        it=find(v.begin(),v.end(),make_pair(0,a));
        (*it).first=1; 
    }
    for(int z=0;z<n-2;z++)
    {
        int a;
        cin>>a;
        vector<pair<int,int> >::iterator it;
        it=find(v.begin(),v.end(),make_pair(1,a));
        (*it).first=2; 
    }
    sort(v.begin(),v.end());
    cout<<v[0].second<<endl<<v[1].second;
    return 0;
}
*/