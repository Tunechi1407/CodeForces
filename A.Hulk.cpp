#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int z=1;z<=n;z++)
	{
		if(z==n)
		{
			if(n%2==0)
				cout<<"I love it";
			else
				cout<<"I hate it";
			break;
		}
		if(z%2==0)
		{
			cout<<"I love that ";
		}
		else
			cout<<"I hate that ";
	}
	return 0;
}
