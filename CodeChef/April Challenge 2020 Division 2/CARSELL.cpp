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
        ll ar[100010];
        S(n);
        for(i=0;i<n;i++) S(ar[i]);
        sort(ar,ar+n);
        reverse(ar,ar+n);
        c=0;
        ll sm=0;
        for(i=0;i<n;i++){
            if(ar[i]){
                x=ar[i]-c;
                x=max(x,0LL);
                c++;
                sm=(sm+x)%OO;
            }
        }
        printf("%lld\n",sm);
    }

    return 0;
}
