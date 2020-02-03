#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef		vector<ll>      vll;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)

vll v[1010];
ll visited[1010];
ll level[1010];

void bfs(ll u){
    visited[u]=1;
    level[u]=0;
    queue<ll>q;
    q.push(u);

    while(!q.empty()){
        u=q.front();
        visited[u]=1;
        q.pop();
        for(ll i=0;i<zz(v[u]);i++){
            ll p=v[u][i];
            if(!visited[p]){
                visited[p]=1;
                level[p]=level[u]+1;
                q.push(p);
            }
        }
    }
}

int main()
{
    ll a,b,c,i,j,t,q,k,x,node,edge;
    S(node);
    for(i=1;i<node;i++){
        SS(a,b);
        v[a].pb(b);
        v[b].pb(a);
    }
    bfs(1);
    S(q);
    multimap<ll,ll>mp;
    while(q--){
        S(x);
        mp.insert({level[x],x});
    }
    cout<<mp.begin()->second<<nn;

    return 0;
}
