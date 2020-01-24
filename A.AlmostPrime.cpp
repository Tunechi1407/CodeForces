#include<bits/stdc++.h>
using namespace std;

#define v(type) vector<type> 
#define map(type1,type2) map<type1,type2>
#define INF 1000000005
#define pb push_back
#define mp make_pair
#define f0(i,n) for(i = 0; i < ( n ); i ++)
#define f1(i,n) for(i = 1; i <= ( n ); i ++)
#define f(i,m,n) for(i = ( m ); i < = ( n ); i ++)
#define nl cout<<endl

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    v(int) isPrime(3001,1);
    v(int) p;
    isPrime[0]=0;
    isPrime[1]=0;
    isPrime[2]=1;
    p.pb(2);
    for(int i=4;i<=3000;i+=2)
        isPrime[i]=0;
    for(int i=3;i<=3000;i+=2)
    {
        if(isPrime[i])
        {
            p.pb(i);
            for(int j=3;j*i<=3000;j+=2)
                isPrime[i*j]=0;
        }
    }
    int n;
    cin>>n;
    int count=0,ans=0;
    for(int i=6;i<=n;i++)
    {
        count=0;
        for(int j=2;j<i;j++)
        {
            if((i%j==0)&&(find(p.begin(),p.end(),j)!=p.end()))
                count++;
        }
        if(count==2)
            ans++;
    }
    cout<<ans;
    return 0;
}