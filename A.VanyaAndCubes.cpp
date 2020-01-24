#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    while(n>=((++i*(i+1))/2))
    {
        n=n-((i)*((i)+1)/2);
    }
    cout<<--i;
    return 0;
}