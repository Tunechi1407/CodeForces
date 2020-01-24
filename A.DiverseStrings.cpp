#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int z=0;z<n;z++)
    {
        string s;
        cin>>s;
        vector<char> st;
        int f=0;
        for(int z=0;z<s.length();z++)
        {
            if(find(st.begin(),st.end(),s[z])!=st.end())
            {cout<<"NO"<<endl; f=1; break;}
            st.push_back(s[z]);
        }
        sort(st.begin(),st.end());
        if(f)
            continue;
        vector<char>::iterator it1;
        vector<char>::iterator it2;
        it1=st.begin();
        it2=++it1;
        it1--;
        for(;it2!=st.end();it2++)
        {
            if(((*it2)-(*it1))!=1)
            {cout<<"NO"<<endl; f=1; break;}
            it1++;
        }
        if(f)
            continue;
        cout<<"YES"<<endl;
    }
    return 0;
}