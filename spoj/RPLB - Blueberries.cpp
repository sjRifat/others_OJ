#include<bits/stdc++.h>
using namespace std;
typedef	    long long       ll;
typedef	    vector<ll>      vll;
#define	    ss              ' '
#define	    nn              "\n"
#define	    PB              pop_back
#define     pb              push_back
#define	    pi              acos(-1.0)
#define	    gcd(a,b)        __gcd(a,b)
#define	    OO              1000000007
#define	    NN              printf("\n")
#define	    zz(v)           (ll)v.size()
#define	    lcm(a,b)        (a*b)/gcd(a,b)
#define     no              printf("NO\n")
#define     yes             printf("YES\n")
#define     S(a)            scanf("%lld",&a)
#define	    all(p)          p.begin(),p.end()
#define     P(a)            printf("%lld\n",a)
#define     db              printf("be steady\n")
#define	    mms(ar,a)       memset(ar,a,sizeof(ar))
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     PP(a,b)         printf("%lld %lld\n",a,b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)

ll ar[200010],dp[2000][2000],n,m,c=0;

ll how(ll i,ll w){
    if(i>=n) return w;
    if(dp[i][w]!=-1) return dp[i][w];
    if(w+ar[i]<=m){
        ll a=how(i+2,w+ar[i]);
        ll b=how(i+1,w);
        return dp[i][w]=max(a,b);
    }
    else return dp[i][w]=how(i+1,w);
}

void solve(){
    ll a,b,i,j,t,k,o,x,y,z;
    ll p=0,sm=0,cnt=0;
    mms(dp,-1);
    SS(n,m);
    for(i=0;i<n;i++) S(ar[i]);
    x=how(0,0);
    printf("Scenario #%lld: %lld\n",++c,x);
}

int main(){
//	freopen("input.txt", "r", stdin);
    ll t;
    S(t);
    while(t--)
        solve();

    return 0;
}
