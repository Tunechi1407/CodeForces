#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int M[n],C[n];
	int sm=0,sc=0;
	for(int z=0;z<n;z++)
	{
		cin>>M[z]>>C[z];
		if(1<=M[z]&&M[z]<=6&&1<=C[z]&&C[z]<=6)
		{
			sm=sm+M[z];
			sc=sc+C[z];
		}
	}
	if(sc<sm)
		cout<<"Mishka";
	else if(sc>sm)
		cout<<"Chris";
	else
		cout<<"Friendship is magic!^^";
	return 0;
}