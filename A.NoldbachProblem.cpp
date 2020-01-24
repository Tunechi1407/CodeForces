#include<bits/stdc++.h>     //Nhi Chl Rha !!
using namespace std;

#define v(type) vector<type> 
#define map(type1,type2) map<type1,type2>
#define INF 1000000005
#define pb push_back
#define mp make_pair
#define f0(i,n) for(i=0; i<( n ); i ++)
#define f1(i,n) for(i = 1; i <= ( n ); i ++)
#define f(i,m,n) for(i = ( m ); i <= ( n ); i ++)
#define nl cout<<endl

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    int n,k;
    int i;
    cin>>n>>k;
    vector<int> isPrime(n+1,1);
    
    v(int) p;
    isPrime[0]=0;
    isPrime[1]=0;
    isPrime[2]=1;
    p.pb(2);
    for(int i=4;i<=n;i+=2)
        isPrime[i]=0;
    for(int i=3;i<=n;i+=2)
    {
        if(isPrime[i])
        {
            p.pb(i);
            for(int j=3;j*i<=n;j+=2)
                isPrime[j*i]=0;
        }
    }
    vector<int>::iterator it;
        int count = 0;
        int temp=p.size();
        f(i,2,temp-1)
        {
            if((p[i-2]+p[i-1]+1)==p[i])
                count++;
        }
        if(count>=k)
            cout<<"YES";
        else
            cout<<"NO";
    return 0;
}