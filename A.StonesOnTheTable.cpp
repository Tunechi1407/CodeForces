#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s; cin>>s;
	int c=0;
	vector<char> v;
	for(int z=0;z<n;z++)
	{
		v.push_back(s[z]);
	}
	for(int z=1;z<n;z++)
    {
        if(v[z]==v[z-1])

        {
            c++; v.erase(v.begin()+z); z--; n--;
        }
    }
	cout<<c;
	return 0;
}
