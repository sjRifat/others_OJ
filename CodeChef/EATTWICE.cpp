#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z;
    S(t);
    while(t--){
        SS(n,m);
        z=n;
        vector<pair<ll,ll>>vp;
        vll v,vv;
        while(n--){
            SS(a,b);
            vp.pb(make_pair(b,a));
        }
        sort(all(vp));
        x=vp[z-1].first;
        while(vp[z-1].second==vp[z-2].second){
            z--;
        }
        x+=(vp[z-2].first);
        printf("%lld\n",x);
    }


    return 0;
}
