#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if((s1.length()+s2.length())!=s3.length())
    {
        cout<<"NO";
        return 0;
    }
    map<char,int> mp1;
    map<char,int> mp2;
    for(int i=0;i<s1.length();i++)
    {
        if(mp1.find(s1[i])==mp1.end())
        {
            mp1.insert({s1[i],1});
        }
        else
        {
            mp1[s1[i]]++;
        }
    }
    for(int i=0;i<s2.length();i++)
    {
        if(mp1.find(s2[i])==mp1.end())
        {
            mp1.insert({s2[i],1});
        }
        else
        {
            mp1[s2[i]]++;
        }
    }
    for(int i=0;i<s3.length();i++)
    {
        if(mp2.find(s3[i])==mp2.end())
        {
            mp2.insert({s3[i],1});
        }
        else
        {
            mp2[s3[i]]++;
        }
    }
    map<char,int>::iterator it1;
    map<char,int>::iterator it2;
    it1=mp1.begin();
    it2=mp2.begin();
    for(;it1!=mp1.end();it1++,it2++)
    {
        if((it1->first!=it2->first)||(it1->second!=it2->second))
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
