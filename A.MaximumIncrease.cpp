#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int a;
    long long int check=0;
    int c=0;
    int max=0;
    for(int z=0;z<n;z++)
    {
        cin>>a;
        if(a>check)
            {c++; check=a;}
        else
            {c=1; check=a;}
        if(c>max)
            max=c;
    }
    cout<<max;
    return 0;
}