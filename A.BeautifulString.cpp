#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,f;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        string s;
        cin>>s;
        if(s.length()==1&&s[0]=='?')
        {
            cout<<"a\n";
            continue;
        }
        for(int i=0;i<s.length();i++)
        {
            f=0;
            if(s[i]=='a'&&s[i-1]=='a'||s[i]=='b'&&s[i-1]=='b'||s[i]=='c'&&s[i-1]=='c')
            {
                cout<<-1<<"\n";
                f=1;
            }
            if(f)
                break;
            if(s[i]=='?')
            {
                if(s[i-1]=='a'||s[i-1]=='b'||s[i-1]=='?')
                {
                    if(s[i+1]=='a'||s[i+1]=='b'||s[i+1]=='?')
                        s[i]='c';
                }
                if(s[i-1]=='a'||s[i-1]=='c'||s[i-1]=='?')
                {
                    if(s[i+1]=='a'||s[i+1]=='c'||s[i+1]=='?')
                        s[i]='b';
                }
                if(s[i-1]=='c'||s[i-1]=='b'||s[i-1]=='?')
                {
                    if(s[i+1]=='c'||s[i+1]=='b'||s[i+1]=='?')
                        s[i]='a';
                }
            }
        }
        if(f)
            continue;
        
        if(s[s.length()-1]=='?')
        {
            if(s[s.length()-2]=='a'||s[s.length()-2]=='b')
                s[s.length()-1]='c';
            else if(s[s.length()-2]=='b'||s[s.length()-2]=='c')
                s[s.length()-1]='a';
            else if(s[s.length()-2]=='a'||s[s.length()-2]=='c')
                s[s.length()-1]='b';
        }
        cout<<s<<endl;
    }
    return 0;
}