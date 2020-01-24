#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    n++;
    while(1)
    {
        int m=n;
        int fi,s,t,fo;
        fo=m%10;
        m=m/10;
        t=m%10;
        m=m/10;
        s=m%10;
        m=m/10;
        fi=m%10;
        if(fi==s||fi==t||fi==fo||s==t||s==fo||t==fo)
        {
            n++;
            continue;
        }
        cout<<n;
        break;
    }
    return 0;
}