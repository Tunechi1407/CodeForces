#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    if(n>=0)
        {cout<<n; return 0;}
    n=abs(n);
    int l=n%10;
    int sl=(n%100)/10;
    if(sl>l)
        {n=n/100; n=n*10+l;}
    else
        n=n/10;
    cout<<0-n;
    return 0;
}