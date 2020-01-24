#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    vector<int> v;
    for(int i=0;i<3;i++)
    {
        long long int a;
        cin>>a;
        v.push_back(a);
    }
    cin>>d;
    sort(v.begin(),v.end());
    int s=0;
    if((v[1]-v[0])<d)
        s=s+abs(v[1]-v[0]-d);
    if((v[2]-v[1])<d)
        s=s+abs(v[2]-v[1]-d);
    cout<<s;
    return 0;
}