#include<bits/stdc++.h>
using namespace std;

 int main()
{
    int n, m, a, b;
    
    cin >> n >> m >> a >> b;
    if (m * a <= b)
        cout << n * a << "\n";
    else 
        cout << (n/m) * b + min((n%m) * a, b) << "\n";
 
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans=0;
    if(m/b<=a)
    {ans=ans+(n/m)*b;
     ans=ans+(n%m)*a;}
    else
        ans=n*a;
    if(ceil((float)n/m)*b<ans)
       {ans=ceil((float)n/m)*b;}
    
    cout<<ans;
    return 0;
}
*/