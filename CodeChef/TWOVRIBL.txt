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

int main(){
//    freopen("in.txt","r",stdin);
    ll a,b,c,i,j,t,k,lie,n,o,p,x,y,z,ar[200010];
    vll v;
    x=0,y=0;p=1,c=0;
    while(x<=1000000000LL){
        c++;
        x=p;
        v.pb(x);
        y=y+p*p;
        while(p*p<=y){
            p++;
        }
    }
//    for(i=0;i<zz(v);i++) cout<<v[i]<<ss;
    S(a);
    while(a--){
        S(n);
        auto it=upper_bound(all(v),n);
        z=it-v.begin();
        printf("%lld\n",z);
    }

    return 0;
}
