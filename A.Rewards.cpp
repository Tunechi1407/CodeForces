#include<bits/stdc++.h>
using namespace std;

int main()
{
    float medals=0;
    float cups=0;
    for(int z=0;z<3;z++)
        {int a; cin>>a; cups=cups+a;}
    for(int z=0;z<3;z++)
        {int a; cin>>a; medals=medals+a;}
    int n;
    cin>>n;
    n=n-ceil(cups/5);
    n=n-ceil(medals/10);
    if(n>=0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}