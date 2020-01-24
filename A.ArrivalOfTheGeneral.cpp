#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    pair<int,int> maxm(ar[0],1);
    pair<int,int> minm(ar[0],1);
    
    for(int i=0;i<n;i++)
    {
        if(ar[i]<=minm.first)
        {
            minm.first=ar[i];
            minm.second=i+1;
        }
        if(ar[i]>maxm.first)
        {
            maxm.first=ar[i];
            maxm.second=i+1;
        }
    }
    if(maxm.second>minm.second)
    {
        cout<<maxm.second+n-2-minm.second;
    }
    else
    {
        cout<<maxm.second+n-1-minm.second;
    }
    

    
    /*
    map<int,int> mp;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(mp.find(a)!=mp.end())
        {
            
        }
        else
            mp.insert({a,i});
    }
    map<int,int>::iterator ite;
    map<int,int>::iterator itb;
    ite=mp.end();
    itb=mp.begin();
    ite--;
    if(ite->second>itb->second)
    {
        cout<<ite->second+n-2-itb->second;
    }
    else
    {
        cout<<ite->second+n-1-itb->second;
    }
    */
    return 0;
}