#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    deque<char> s1;
    if(n%2==0){for(int i=0;i<s.length();i++)
    {
        if(i%2==0)
        {
            s1.push_front(s[i]);
        }
        else
        {
            s1.push_back(s[i]);
        }
    }}
    else
    {
        for(int i=0;i<s.length();i++)
    {
        if(i%2==0)
        {
            s1.push_back(s[i]);
        }
        else
        {
            s1.push_front(s[i]);
        }
    }
    }
    deque<char>::iterator it;
    for(it=s1.begin();it!=s1.end();it++)
        cout<<(*it);
    return 0;
}