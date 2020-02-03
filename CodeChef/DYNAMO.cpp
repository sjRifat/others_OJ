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

int main(){
//    freopen("input.txt","r",stdin);
    ll i,j,t,k,lie,m,n,o,x,y,z;
    S(t);
    while(t--){
        ll a,b,c,d,e,f,s=1,sm=0;
        S(n);
        for(i=0;i<n;i++) s*=10;
        S(a);
        printf("%lld\n",s*2+a);
        fflush(stdout);
        S(b);
        printf("%lld\n",s-b);
        fflush(stdout);
        S(d);
        printf("%lld\n",s-d);
        fflush(stdout);
        S(x);
        if(x==-1) return 0;
    }

    return 0;
}
