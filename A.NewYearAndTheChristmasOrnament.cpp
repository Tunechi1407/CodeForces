#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,b,y;
    cin>>r>>b>>y;
    if(r==b&&b==y)
        {cout<<3*r-3; return 0;}
    if(r==b)
    {
        if(r-y>=2)
            {cout<<3*y+3; return 0;}
        

    }

}
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,b,r;
    cin>>y>>b>>r;
    if(r>=y&&r>=b)
    {
        if(y>=b)
            cout<<3*b;
        else if(b>y)
            cout<<3*y+3;
        return 0;
    }
    if(b>=r&&b>=y)
    {
        if(r-y>=2)
            cout<<3*y+3;
        else
            cout<<3*r-3;
        return 0;
    }
    if(y>=r&&y>=b)
    {
        if(r>b)
            cout<<3*b;
        else if(b>=r)
            cout<<3*r-3;
        return 0;
    }
}
*/