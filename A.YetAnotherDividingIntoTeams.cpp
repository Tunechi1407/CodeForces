#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int z=0;z<q;z++)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        if(n==1)
        {cout<<1<<endl; continue;}
        sort(v.begin(),v.end());
        if(n==2)
        {
            if(v[1]-v[0]>1)
            {
                cout<<1<<endl;
                continue;
            }
            else
            {
                cout<<2<<endl;
                continue;
            }
        }
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<n;i+=2)
        {
            v1.push_back(v[i]);
        }
        for(int i=1;i<n;i+=2)
        {
            v2.push_back(v[i]);
        }
        int f=0;
        for(int i=0;i<v1.size();i++)
        {
            for(int j=0;j<v2.size();j++)
            {   if(abs(v1[i]-v2[j])==1)
                    {f=1; break;}
            }
            if(f==1) break;
        }
        if(f)
            cout<<2<<endl;
        else cout<<1<<endl;
    }
    return 0;
}