#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int> mp;
    for(int z=0;z<n-1;z++)
    {
        string s1="";
        s1=s1+s[z]+s[z+1];
        if(mp.find(s1)==mp.end())
        {
            mp.insert({s1,1});
        }
        else
            mp[s1]++;
    }
    map<int,string> ans;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        ans.insert({it->second,it->first});
    }
    map<int,string>::iterator it;
    it=ans.end();
    it--;
    cout<<it->second;
    return 0;
}