#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	for(int z=0;z<T;z++)
	{
		int b,p,f;
		cin>>b>>p>>f;
		int h,c;
		cin>>h>>c;
		int ans=0;
		if(h>c)
		{
			while(b>=2&&p>0)
			{
				ans=ans+h;
				p--;
				b-=2;
			}
			while(b>=2&&f>0)
			{
				ans=ans+c;
				f--;
				b-=2;
			}
		}
		else
		{
			while(b>=2&&f>0)
			{
				ans=ans+c;
				f--;
				b-=2;
			}
			while(b>=2&&p>0)
			{
				ans=ans+h;
				p--;
				b-=2;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}