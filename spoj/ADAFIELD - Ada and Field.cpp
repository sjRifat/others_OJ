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

ll ar[200010];
void solve(){
    ll a=1,b=0,c=0,n,i,j,q,k,m,o,x=1,y=0,z;
    ll p=0,sm=0,cnt=0,mx=-OO,mn=OO,ans[100010]={0};
    SSS(n,m,q);
    priority_queue<pair<ll,pair<ll,ll>>>pqx,pqy;
    set<pair<ll,ll>>stx,sty;
    set<ll>sx,sy;
    pqx.push({n,{0,n}});
    pqy.push({m,{0,m}});
    stx.insert({0,n});
    sty.insert({0,m});
    sx.insert(0);
    sx.insert(n);
    sy.insert(0);
    sy.insert(m);
    while(q--){
        S(z);
        if(z==0){
            S(x);
            if(sx.find(x)==sx.end()){
                sx.insert(x);
                auto it=sx.upper_bound(x);
                b=*it;
                it--;
                it--;
                a=*it;
                stx.erase({a,b});
                stx.insert({a,x});
                stx.insert({x,b});
                pqx.push({x-a,{a,x}});
                pqx.push({b-x,{x,b}});
            }
        }
        else{
            S(y);
            if(sy.find(y)==sy.end()){
                sy.insert(y);
                auto it=sy.upper_bound(y);
                b=*it;
                it--;
                it--;
                a=*it;
                sty.erase({a,b});
                sty.insert({a,y});
                sty.insert({y,b});
                pqy.push({y-a,{a,y}});
                pqy.push({b-y,{y,b}});
            }
        }

        while(stx.find({pqx.top().se.fi,pqx.top().se.se})==stx.end()) pqx.pop();
        while(sty.find({pqy.top().se.fi,pqy.top().se.se})==sty.end()) pqy.pop();
        P(pqx.top().fi*pqy.top().fi);
    }

}

int main(){
//	freopen("input.txt", "r", stdin);
    ll t;
    S(t);
    while(t--)
        solve();

    return 0;
}