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
#define     yes             printf("YES\n")
#define     no              printf("NO\n")
#define     P(a)            printf("%lld\n",a)
#define     PP(a,b)         printf("%lld %lld\n",a,b)
#define	    gcd(a,b)        __gcd(a,b)
#define	    lcm(a,b)        (a*b)/gcd(a,b)
#define	    pi              acos(-1.0)
#define	    OO              1000000007

int main(){
//	freopen("input.txt", "r", stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    S(t);
    while(t--){
        S(n);
        m=n;
        ll sm=0,cnt=0,p=0,tn=0;
        while(n%2==0){
            n/=2;
            cnt++;
        }
        x=(1LL<<(cnt+1));
        P(m/x);
    }

    return 0;
}
