#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<min(a,b)<<" ";
	int c=max(a,b);
	int d=min(a,b);
	c=c-d;
	d=d-0;
	cout<<c/2;
	return 0;
}