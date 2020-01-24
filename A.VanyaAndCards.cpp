#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    float s=0;
    for(int z=0;z<n;z++)
    {
        float a;
        cin>>a;
        s=s+a;
    }
    s=abs(s);
    cout<<ceil(s/x);
    return 0;
}