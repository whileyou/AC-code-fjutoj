#include <bits/stdc++.h>
using namespace std;
int t,a[100001],n,f1[100001],f2[100001],go[100001],ans1,ans2,ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);ans1=ans2=ans=0;
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		go[0]=a[0];memset(f1,0,sizeof(f1));memset(f2,0,sizeof(f2));
		for(int i=1;i<n;i++)
		{
			if(a[i]>=go[ans1]) go[++ans1]=a[i];
			else
			go[upper_bound(go,go+ans1,a[i])-go]=a[i];
			f1[i]=ans1;
		}
		go[0]=a[n-1];
		for(int i=n-2;i>=0;i--)
		{
			if(a[i]>=go[ans2]) go[++ans2]=a[i];
			else
			go[upper_bound(go,go+ans2,a[i])-go]=a[i];
			f2[i]=ans2;
		}
		for(int i=0;i<n;i++) ans=max(ans,f1[i]+f2[i]);
		printf("%d\n",ans+1);
	}
	return 0;
}
