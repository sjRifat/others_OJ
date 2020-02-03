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

vll v[100010];
bool visited[100010];
ll node,edge,cnt=0;

void dfs(ll u){
    visited[u]=true;
    cnt++;
    for(ll i=0;i<zz(v[u]);i++){
        ll p=v[u][i];
        if(!visited[p]) dfs(p);
    }
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll a,b,c,s,d,i,j,t,k,x;
    SS(node,edge);
    for(i=0;i<edge;i++){
       SS(a,b);
       v[a].pb(b);
       v[b].pb(a);
    }
    S(x);
    dfs(x);
    cout<<node-cnt<<nn;

    return 0;
}
