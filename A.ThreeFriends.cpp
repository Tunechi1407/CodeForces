#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int64_t a,b,c;
        cin>>a>>b>>c;
        int64_t m=round((a+b+c)/3);
        if(a>m)
            a--;
        if(a<m)
            a++;
        if(b>m)
            b--;
        if(b<m)
            b++;
        if(c<m)
            c++;
        if(c>m)
            c--;
        
        cout<<abs(a-b)+abs(b-c)+abs(a-c)<<endl;
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int s=(abs(a-b)+abs(a-c)+abs(b-c));
        if(abs(a-b)==1||abs(b-c)==1||abs(a-c)==1)
            {cout<<s-2<<endl; continue;}
        if(abs(a-b)==0&&abs(a-c)==0&&abs(c-b)==0)
            {cout<<0<<endl; continue;}
        if((a==b&&abs(a-c)==1)||(c==b&&abs(a-c)==1)||(a==c&&abs(b-c)==1))
            {cout<<0<<endl; continue;}
        cout<<s-4<<endl;
    }
    return 0;
}
*/