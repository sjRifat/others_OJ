#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		mms(ar,a)       memset(ar,a,sizeof(ar))
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define		OO              10000000000

vll v[2010];
ll visited[2010];
ll level[2010];

ll bfs(ll u){
    ll nd=u;
    visited[u]=1;
    level[u]=0;
    queue<ll>q;
    q.push(u);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(ll i=0;i<zz(v[u]);i++){
            ll p=v[u][i];
            if(!visited[p]){
                visited[p]=1;
                level[p]=level[u]+1;
                q.push(p);
            }
            else if(p==nd) return level[u]+1;
        }
    }
    return 0;
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,n,j,t,q,s,k,x;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%lld",&a);
            if(a==1){
                v[i].push_back(j);
            }
        }
    }
    for(i=0;i<n;i++){
        memset(visited,0,sizeof(visited));
        memset(level,0,sizeof(level));
        ll x=bfs(i);
        if(x) printf("%lld\n",x);
        else printf("NO WAY\n");
    }

    return 0;
}
