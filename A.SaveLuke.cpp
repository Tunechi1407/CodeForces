#include<bits/stdc++.h>
using namespace std;

int main()
{
    double d,L,v1,v2;
    cin>>d>>L>>v1>>v2;
    L=L-d;
    v1=v1+v2;
    cout<<fixed<<setprecision(20)<<L/v1;
    return 0;
}
