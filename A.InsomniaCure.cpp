#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[4],d;
    for(int i=0;i<4;i++)
    {
        cin>>ar[i];
    }
    cin>>d;
    map<int,int> mp;
    for(int i=1;i<=d;i++)
    {
        mp.insert({i,0});
    }
    for(int i=0;i<4;i++)
    {
        for(int j=ar[i];j<=d;j+=ar[i])
        {
            mp[j]=1;
        }
    }
    int c=0;
    for(int i=1;i<=d;i++)
    {
        if(mp[i]==1)
            c++;
    }
    cout<<c;
    return 0;
}