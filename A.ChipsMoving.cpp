#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ce=0,co=0;
    for(int z=0;z<n;z++)
    {
        long long int a;
        cin>>a;
        if(a%2==0)
            ce++;
        else
            co++;
    }
    if(ce>co)
        cout<<co;
    else
        cout<<ce;
    return 0;
}
/*  Wrong Code :-(
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int ar[n];
    int c=0;
    for(int z=0;z<n;z++)
    {
        cin>>ar[z];
    }
    for(int z=1;z<n;z++)
    {
        if(abs(ar[z]-ar[0])%2!=0)
            c++;
    }
    cout<<c;
    return 0;
}
*/