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

bool cmp(pair<ll,ll>a, pair<ll,ll>b){
    if(a.first!=b.first) return a.first<b.first;
    return a.second>b.second;
}
bool cmp2(pair<ll,ll>a, pair<ll,ll>b){
    if(a.first!=b.first) return a.first>b.first;
    return a.second<b.second;
}

ll ar[200010],a1[200010];
void solve(){
    ll a,b,c=1,i,j,k,m,n,o,x,y,z;
    ll p=2,sm=0,cnt=0,mx=-OO,mn=OO;
    vector<pair<ll,ll>>v;
    S(n);
    map<pair<ll,ll>,ll>mp;
    for(i=0;i<n;i++){
        SS(a,b);
        v.pb({a,b});
        mp[{a,b}]=i;
    }
    sort(all(v),cmp);
    for(i=n-1;i>=0;i--){
        mn=min(v[i].second,mn);
        ar[i]=mn;
    }
    ar[n]=OO;
    for(i=0;i<n;i++){
        if(ar[i+1]<=v[i].second) a1[mp[{v[i].first,v[i].second}]]=1;
        else a1[mp[{v[i].first,v[i].second}]]=0;
    }
    for(i=0;i<n;i++) cout<<a1[i]<<ss;
    NN;

    sort(all(v),cmp2);
    for(i=n-1;i>=0;i--){
        mx=max(v[i].second,mx);
        ar[i]=mx;
    }
    ar[n]=-OO;
    for(i=0;i<n;i++){
        if(ar[i+1]>=v[i].second) a1[mp[{v[i].first,v[i].second}]]=1;
        else a1[mp[{v[i].first,v[i].second}]]=0;
    }
    for(i=0;i<n;i++) cout<<a1[i]<<ss;
    NN;
}
int main(){
//	freopen("input.txt", "r", stdin);
//    ll t;
//    S(t);
//    while(t--)
        solve();

    return 0;
}

