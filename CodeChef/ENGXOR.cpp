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
#define		OO              10000000000

ll eo[100010];

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,q,e,i,j,t,k,lie,m,n,o,x,y,z;
    for(i=1;i<=100000;i++){
        x=i;
        c=0;
        while(x){
            if(x%2==1) c++;
            x/=2;
        }
        if(c&1) eo[i]=1;
    }
    S(t);
    while(t--){
        e=0;
        o=0;
        SS(n,q);
        ll ar[n+5];
        for(i=0;i<n;i++){
            S(x);
            c=0;
            while(x){
                if(x%2==1) c++;
                x/=2;
            }
            if(c&1) o++;
            else e++;
        }
        while(q--){
            S(a);
            if(eo[a]) printf("%lld %lld\n",o,e);
            else printf("%lld %lld\n",e,o);
        }
    }

    return 0;
}
