#include<bits/stdc++.h>
using namespace std;

typedef uint64_t lli;
typedef uint64_t ld;

int main()
{
    lli n;
    ld p;
    cin>>n>>p;
    if(p>(n+1)/2)
    {
        p=p-(n+1)/2;
        cout<<p*2;
    }
    else
    {
        cout<<(p-0.5)*2;
    }
    return 0;
}
