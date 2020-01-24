#include<bits/stdc++.h>
#define min(a,b) ((a)<(b)?(a):(b))
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ans=min(p/np,min((k*l)/nl,d));
    cout<<ans/n;
    return 0;
}