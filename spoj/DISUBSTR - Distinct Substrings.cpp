#include<bits/stdc++.h>
using namespace std;
typedef	    long long       ll;
typedef	    vector<ll>      vll;
#define	    ss              ' '
#define	    nn              "\n"
#define	    fi              first
#define	    se              second
#define	    PB              pop_back
#define     pb              push_back
#define	    pi              acos(-1.0)
#define	    gcd(a,b)        __gcd(a,b)
#define	    OO              1000000007
#define	    NN              printf("\n")
#define	    zz(v)           (ll)v.size()
#define	    lcm(a,b)        (a*b)/gcd(a,b)
#define     no              printf("NO\n")
#define     mo              printf("-1\n")
#define     yes             printf("YES\n")
#define     S(a)            scanf("%lld",&a)
#define	    all(p)          p.begin(),p.end()
#define     P(a)            printf("%lld\n",a)
#define     db              printf("be steady\n")
#define	    mms(ar,a)       memset(ar,a,sizeof(ar))
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     PP(a,b)         printf("%lld %lld\n",a,b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     base            256
#define     MOD             1000000007
#define     MOD2            999999937

ll pH[100010],po[100010],pH2[100010],po2[100010];
void preprocess(string s){
    pH[0]=s[0];
    po[0]=1;
    for(ll i=1;i<(ll)s.size();i++){
        pH[i]=((pH[i-1]*base)+(s[i]))%MOD;
        po[i]=po[i-1]*base%MOD;
    }
}

void preprocess2(string s){
    pH2[0]=s[0];
    po2[0]=1;
    for(ll i=1;i<(ll)s.size();i++){
        pH2[i]=((pH2[i-1]*base)+(s[i]))%MOD2;
        po2[i]=po2[i-1]*base%MOD2;
    }
}

ll getHash(ll L,ll R){
    if(!L) return pH[R];
    return ((pH[R]-(pH[L-1]*po[R-L+1])%MOD)+MOD)%MOD;
}

ll getHash2(ll L,ll R){
    if(!L) return pH2[R];
    return ((pH2[R]-(pH2[L-1]*po2[R-L+1])%MOD2)+MOD2)%MOD2;
}

void solve(){
    ll a=1,b=0,c=0,n,i,j,k,m,q,x,y,z;
    ll p=0,sm=0,cnt=0,mx=-OO,mn=OO;
    string s;
    cin>>s;
    n=zz(s);
    preprocess(s);
    preprocess2(s);
    for(i=0;i<n;i++){
        set<pair<ll,ll>>st;
        for(j=0;j+i<n;j++){
            x=getHash(j,j+i);
            y=getHash2(j,j+i);
            st.insert({x,y});
        }
        sm+=zz(st);
    }
    P(sm);
}

int main(){
//	freopen("input.txt", "r", stdin);
    ll t,i,j;
    S(t);
    while(t--)
        solve();

    return 0;
}
