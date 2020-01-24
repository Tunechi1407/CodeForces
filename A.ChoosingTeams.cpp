#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    int ar[n];
    int c=0;
    for(int z=0;z<n;z++)
    {
        cin>>ar[z];
        if(5-ar[z]>=p)
            c++;
    }
    cout<<c/3;
    return 0;
}