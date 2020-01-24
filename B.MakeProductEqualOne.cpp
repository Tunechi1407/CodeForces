#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cp=0,cn=0,cz=0;
    int c=0;
    long long int ar[n];
    for(int z=0;z<n;z++)
    {
        cin>>ar[z];
        c=c+min(abs(ar[z]-1),abs(ar[z]+1));
        if(ar[z]>0) cp++;
        if(ar[z]<0) cn++;
        if(ar[z]==0) cz++;
    }
    if(cn%2==0)
    {cout<<c; return 0;}
    else
    {if(cz>0) cout<<c;
     else cout<<c+2;}
    return 0;
}