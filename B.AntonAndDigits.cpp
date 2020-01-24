#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int s=0;
    s=s+256*min(min(k5,k6),k2);
    k2-=min(min(k5,k6),k2);
    k5-=min(min(k5,k6),k2);
    k6-=min(min(k5,k6),k2);
    s=s+32*min(k2,k3);
    cout<<s;
    return 0;
}
