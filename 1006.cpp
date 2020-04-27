#include <bits/stdc++.h>	//思维题 
using namespace std;
long long n,ans;
int main()
{
	while(~scanf("%lld",&n))
	{
		ans=0;
		while(n)
		{
			if(n%2) ans+=(n/2+1)*(n/2+1);
			else ans+=(n/2)*(n/2);
			n=n/2;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
