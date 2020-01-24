#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    char ar[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>ar[i][j];
        }
    }
    int co=0;
    for(int i=0;i<r;i++)
    {
        int f=0;
        for(int j=0;j<c;j++)
        {
            if(ar[i][j]=='S')
            {f=1; break;}
        }
        if(f)
        {
            continue;
        }
        for(int j=0;j<c;j++)
        {
            if(ar[i][j]=='.')
            {co++; ar[i][j]='-';}
        }
    }
    for(int i=0;i<c;i++)
    {
        int f=0;
        for(int j=0;j<r;j++)
        {
            if(ar[j][i]=='S')
            {f=1; break;}
        }
        if(f)
            continue;
        for(int j=0;j<r;j++)
        {
            if(ar[j][i]=='.')
            {co++; ar[j][i]='-';}
        }
    }
    cout<<co;
    return 0;
}