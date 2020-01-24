#include<bits/stdc++.h>         //Editorial was required.
using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int z=0;z<q;z++)
    {
        long long int a,b;
        cin>>a>>b;
        if(a-b>1)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }      
    }
    return 0;
}