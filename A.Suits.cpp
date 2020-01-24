#include<bits/stdc++.h>
#define min(a,b) ((a)>(b)?(b):(a))
using namespace std;

int main()
{
    int a,b,c,d,e,f,ans=0;
    cin>>a>>b>>c>>d>>e>>f;
    if(e>f)
    {
        ans=ans+(min(a,d)*e);
        int x=min(a,d);
        a=a-x;
        d=d-x;
        ans=ans+min(b,min(c,d))*f;
        cout<<ans;
        return 0;
    }
    else
    {
        ans=ans+(min(b,min(c,d))*f);
        int x=min(b,min(c,d));
        b=b-x;
        d=d-x;
        c=c-x;
        ans=ans+(min(a,d)*e);
        cout<<ans;
        return 0;
    }
}