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
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    S(t);
    while(t--){
        ll ar[110],p=0,sm=0;
        SS(n,x);
        for(i=0;i<n;i++) S(ar[i]),sm^=ar[i];
        sm^=x;
        for(i=0;i<n;i++) if(ar[i]==sm) p=1;
        if(p) printf("Case %lld: -1\n",++c);
        else printf("Case %lld: %lld\n",++c,sm);
    }

    return 0;
}