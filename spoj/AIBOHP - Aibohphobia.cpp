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

ll ar[200010],dp[6116][6116];
string s;

ll how(ll x,ll y){
    if(x>=y) return 0;
    if(dp[x][y]!=-1) return dp[x][y];
    if(s[x]==s[y]){
        dp[x][y]=how(x+1,y-1);
    }
    else{
        ll a=how(x+1,y)+1;
        ll b=how(x,y-1)+1;
        dp[x][y]=min(a,b);
    }
    return dp[x][y];
}

void solve(){
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    ll p=0,sm=0,cnt=0;
    mms(dp,-1);
    cin>>s;
    x=how(0,zz(s)-1);
    P(x);
}

int main(){
//	freopen("input.txt", "r", stdin);
    ll t;
    S(t);
    while(t--)
        solve();

    return 0;
}
