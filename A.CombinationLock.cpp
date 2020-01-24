#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ar[n];
    char ar1[n];
    int ans=0;
    for(int z=0;z<n;z++)
        cin>>ar[z];
    for(int z=0;z<n;z++)
        cin>>ar1[z];
    for(int z=0;z<n;z++)
    {
        int s=0;
        s=(int)(ar[z]-'0')-(int)(ar1[z]-'0');
        s=abs(s);
        if(s<=5)
            ans=ans+s;
        else
            ans=ans+10-s;
    }
    cout<<ans;
    return 0;
}