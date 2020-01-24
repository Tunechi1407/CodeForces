#include<bits/stdc++.h>
using namespace std;

int main()
{
	int r,c;
	for(int i=1;i<6;i++)
	{
		for(int j=1;j<6;j++)
		{
			int a;
			cin>>a;
			if(a==1)
			{
				r=i;
				c=j;
			}
		}
	}
	cout<<(abs(3-r)+abs(c-3));
	return 0;
}