#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,r;
    cin>>s;
    cin>>r;
    string s1="";
    for(int i=0;i<s.length();i++)
    {
        s1=s[i]+s1;
    }
    if(s1==r)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}