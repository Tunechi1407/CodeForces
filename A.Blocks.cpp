#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<char> v;
    for(int z=0;z<s.length();z++)
        v.push_back(s[z]);
    int cw=count(v.begin(),v.end(),'W');
    int cb=count(v.begin(),v.end(),'B');
    if((cw%2!=0)&&(cb%2!=0))
        {cout<<-1; return 0;}
    
}
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    int i=1;
    int cw=count(v.begin(),v.end(),'W');
    int cb=count(v.begin(),v.end(),'B');
    char ch;
    if(cw==0||cb==0)
        {cout<<0; return 0;}
    if(cw>cb)
        ch='B';
    else
        ch='W';
    string s;
    cin>>s;
    vector<char> v;
    for(int z=0;z<s.length();z++)
        v.push_back(s[z]);
    while(find(v.begin(),v.end(),'W')!=v.end()||find(v.begin(),v.end(),'B')!=v.end()||c<3*n)
    {
        
    }
}
*/