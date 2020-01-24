#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;
    for(int i=0;i<n;i++)
    {
        if(s[i]>=65&&s[i]<=90)
            s[i]=s[i]+32;
        st.insert(s[i]);
    }
    if(st.size()<26)
        cout<<"NO";
    else
    {
        cout<<"YES";
    }
    return 0;    
}