#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int m=n;
	if(n%2!=0)
		n=n-3;
	int c=n/2;
	if(m%2==0)
		cout<<c<<endl;
	else
		cout<<c+1<<endl;
	for(int z=0;z<c;z++)
		cout<<2<<" ";
	if(m%2!=0)
		cout<<3;
	return 0;
}