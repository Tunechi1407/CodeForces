
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        long long int a,b,c,n;
        cin>>a>>b>>c>>n;
        long long int min=(a<b?a:(b<c?b:c));
        a=a-min; b=b-min; c=c-min;
        if(n==0)
        {
            if(a!=b||b!=c||a!=c)
                {cout<<"NO"<<endl; continue;}
        }
        long long int max=(a>b?a:(b>c?b:c));
        n=n-max+a;
        n=n-max+b;
        n=n-max+c;
        if(n>=0&&n%3==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
