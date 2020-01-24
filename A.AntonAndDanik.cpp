#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cD=0,cA=0;
	for(int z=0;z<n;z++)
	{
		if(s[z]=='A')
			cA++;
		else  if(s[z]=='D')
			cD++;
	}
	if(cA>cD)
		cout<<"Anton";
	else if(cA<cD)
		cout<<"Danik";
	else
		cout<<"Friendship";
	return 0;
}