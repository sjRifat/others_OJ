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
#define		OO              1000000007

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,n,j,t,q,s,k,x;
    S(t);
    while(t--){
        ll ar[1010];
        S(n);
        vll v;
        for(i=0;i<n;i++){
            S(a);
            if(a) v.pb(i);
        }
        c=0;
        if(zz(v)==1){
            printf("YES\n");
            continue;
        }
        for(i=0;i<zz(v)-1;i++){
            if(v[i+1]-v[i]<6){
                c=1;
                break;
            }
        }
        if(c) printf("NO\n");
        else printf("YES\n");
    }

    return 0;
}
