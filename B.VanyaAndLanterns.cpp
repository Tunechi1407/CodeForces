#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int l;
    cin>>n>>l;
    vector<long long int> v;
    for(int z=0;z<n;z++)
    {
        long long int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    vector<long long int>::iterator it;
    double diff=0;
    it=v.begin();
    for(;*it!=v[n-1];it++)
    {
        vector<long long int>::iterator it1;
        vector<long long int>::iterator it2;
        it1=it;
        it2=++it;
        it--;
        if((*it2-*it1)>diff)
            diff=(double)(*it2-*it1);
    }
    //double ans=max((double)v[0],diff/2,(double)(l-v[n-1]));
    double ans;
    double a1=diff/2;
    double a2=l-v[n-1];
    double a3=v[0];
    cout<<fixed<<setprecision(10)<<max(a1,max(a2,a3));    
    return 0;
}