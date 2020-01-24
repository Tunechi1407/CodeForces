#include<bits/stdc++.h>
#define min(a,b) (((a)<(b))?a:b)
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    int c1=0,c2=0,c3=0;
    int ar1[n],ar2[n],ar3[n];
    int i1=0,i2=0,i3=0;
    for(int z=0;z<n;z++)
    {
        cin>>ar[z];
        if(ar[z]==1)
            {c1++; ar1[i1]=z+1; i1++;}
        else if(ar[z]==2)
            {c2++; ar2[i2]=z+1; i2++;}
        else if(ar[z]==3)
            {c3++; ar3[i3]=z+1; i3++;}
    }
    cout<<(min(c1,min(c2,c3)))<<"\n";
    for(int i=0;i<min(c1,min(c2,c3));i++)
    {
        cout<<ar1[i]<<" "<<ar2[i]<<" "<<ar3[i]<<"\n";
    }
    return 0;
}