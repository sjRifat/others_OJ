#include<bits/stdc++.h>
using namespace std;
typedef	    long long       ll;
typedef	    vector<ll>      vll;
#define     pb              push_back
#define	    PB              pop_back
#define	    nn              "\n"
#define	    all(p)          p.begin(),p.end()
#define	    zz(v)           (ll)v.size()
#define	    mms(ar,a)       memset(ar,a,sizeof(ar))
#define	    ss              ' '
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     P(a)            printf("%lld\n",a)
#define     PP(a,b)         printf("%lld %lld\n",a,b)
#define	    gcd(a,b)        __gcd(a,b)
#define	    lcm(a,b)        (a*b)/gcd(a,b)
#define	    pi              acos(-1.0)
#define	    OO              1000000007

ll ar[200000],br[200000];
int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,sm=0,m,n,o,x,y,z;
    S(t);
    while(t--){
        SSS(n,m,k);
        for(i=0;i<n;i++){
            ll mx=0;
            ll cnt[11];
            mms(cnt,0);
            for(j=0;j<k;j++){
                S(a);
                cnt[a]++;
                mx=max(mx,cnt[a]);
            }
            for(j=1;j<11;j++){
                if(cnt[j]==mx){
                    printf("%lld ",j);
                    break;
                }
            }

        }
        printf(nn);
    }

    return 0;
}
