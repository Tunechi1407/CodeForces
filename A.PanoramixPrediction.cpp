#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int f=0;
    int c=0;
    for(int z=1;z<=a;z++)
    {
        if(a%z==0)
        c++;
    }
    if(c!=2)
    {cout<<"NO"; return 0;}
    c=0;
    for(int z=1;z<=b;z++)
    {
        if(b%z==0)
        c++;
    }
    if(c!=2)
    {cout<<"NO"; return 0;}
    for(int i=a+1;i<b;i++)
    {
        c=0;
        for(int z=1;z<=i;z++)
        {if(i%z==0) c++;}
        if(c==2)
        {cout<<"NO"; return 0;}
    }
    cout<<"YES";
    return 0;
}