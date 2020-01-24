#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    double minm=100000000;
    for(int z=0;z<n;z++)
    {
        double a,b;
        cin>>a>>b;
        minm=min(minm,a/b);
    }
    cout<<fixed<<setprecision(8)<<m*minm;
    return 0;
}