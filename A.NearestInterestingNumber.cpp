#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n;;i++)
    {
        int s=0;
        int j=i;
        while(j>0)
        {
            int r=j%10;
            s=s+r;
            j=j/10;
        }
        if(s%4==0)
        {cout<<i; return 0;}
    }
}