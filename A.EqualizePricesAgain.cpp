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
        long long int s=0;
        for(int i=0;i<n;i++)
        {
            long long int a;
            cin>>a;
            s=s+a;
        }
        int ans=ceil((double)s/n);
        cout<<ans<<endl;
    }
    return 0;
}