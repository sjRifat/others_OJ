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
//    freopen("in.txt","r",stdin);
    ll a,b,c,i,j,t,k,lie,m,n,o,x,u,y,z;
    SS(n,u);
    ll ar[n+5];
    mms(ar,0);
    while(u--){
        SS(a,b);
        ar[a-1]+=b;
    }
    for(i=1;i<n;i++) ar[i]+=ar[i-1];
    for(i=0;i<n-1;i++) printf("%lld ",ar[i]);
    printf("%lld\n",ar[n-1]);

    return 0;
}
