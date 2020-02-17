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
    ll b,d,i,j,t,k,lie,m,n,o,x,y,z;
    S(t);
    while(t--){
        ll ar[10010],br[10010],s=0;
        S(n);
        for(i=0;i<n;i++) S(ar[i]);
        for(i=0;i<n;i++) S(br[i]);
        sort(ar,ar+n);
        sort(br,br+n);
        for(i=0;i<n;i++){
            s+=min(ar[i],br[i]);
        }
        printf("%lld\n",s);
    }

    return 0;
}
