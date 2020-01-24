#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int z=0;z<q;z++)
    {
        long long int a,b,n;
        cin>>a>>b>>n;
        if(n%3==0)
            cout<<a<<endl;
        else if((n+1)%3==0)
            cout<<(a^b)<<endl;
        else
            cout<<b<<endl;
    }
    return 0;
}