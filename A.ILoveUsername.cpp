#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    int min=INT_MAX;
    int max=INT_MIN;
    int c=0;
    for(int z=0;z<n;z++)
    {
        cin>>ar[z];
        if(max<ar[z])
            {max=ar[z]; c++;}
        if(min>ar[z])
            {min=ar[z]; c++;}
    }
    c-=2;
    cout<<c;
    return 0;
}