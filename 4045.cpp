//模拟、基础
#include <bits/stdc++.h>
using namespace std;
int n,a,b,x[100001],vis[100001],maxn,minn=100001,l=100001,r,lp,rp,maxnp,minnp;
int main()
{
	scanf("%d %d %d",&n,&a,&b);
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);vis[x[i]]=i;
	}
	if(vis[a]>vis[b]) swap(a,b);
	for(int i=vis[a];i<=vis[b];i++)
	maxn=max(maxn,x[i]),minn=min(minn,x[i]);
	for(int i=minn;i<=maxn;i++)
	l=min(l,vis[i]),r=max(r,vis[i]);
	lp=min(vis[a],vis[b]);rp=max(vis[a],vis[b]);
	while(l<lp||r>rp){
		maxnp=maxn,minnp=minn;
		for(int i=l;i<lp;i++)
		maxn=max(maxn,x[i]),minn=min(minn,x[i]);
		for(int i=rp+1;i<=r;i++)
		maxn=max(maxn,x[i]),minn=min(minn,x[i]);
		lp=l,rp=r;
		for(int i=minn;i<minnp;i++)
		l=min(l,vis[i]),r=max(r,vis[i]);
		for(int i=maxnp+1;i<maxn;i++)
		l=min(l,vis[i]),r=max(r,vis[i]);
	}
	if(a==b) l=r=vis[a];
	printf("%d %d",l+1,r+1);
	return 0;
}
