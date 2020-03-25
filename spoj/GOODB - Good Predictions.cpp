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

bool ar[1000];
vll v;

vll vr(ll n){
    vll vrr;
    for(ll i=2;i<=n;i++){
        ll x=i;
        for(ll j=0;v[j]<=x;j++){
            if(x%v[j]==0){
                while(x%v[j]==0){
                    x/=v[j];
                    vrr.pb(v[j]);
                }
            }
        }
        if(x!=1) vrr.pb(x);
    }
    return vrr;
}

void sieve(){
    ll i,j,n=1000;
    v.pb(2LL);
    for(i=3;i<=n;i+=2){
        if(ar[i]==0){
            v.pb(i);
            if(i>n/i) continue;
            for(j=i*i;j<=n;j+=(i+i)) ar[j]=1;
        }
    }
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,k=2,lie,m,n,s=0,o,x,y,z,ar[200010],mul=1;
    sieve();
    S(n);
    SSS(a,b,c);
    if(n==1){
        printf("1\n");
        return 0;
    }
    vll vu,vd,vt;
    vu= vr(n);
    if(a>1){
        vt=vr(a);
        for(i=0;i<zz(vt);i++) vd.pb(vt[i]);
        vt.clear();
    }
    if(b>1){
        vt=vr(b);
        for(i=0;i<zz(vt);i++) vd.pb(vt[i]);
        vt.clear();
    }
    if(c>1){
        vt=vr(c);
        for(i=0;i<zz(vt);i++) vd.pb(vt[i]);
        vt.clear();
    }
    if(zz(vd)==0){
        printf("%lld\n",n*(n-1));
        return 0;
    }
    sort(all(vd));
    sort(all(vu));
    for(i=0,j=0;i<zz(vu);i++){
        if(vu[i]==vd[j]) j++;
        else mul=(mul*vu[i])%OO;
    }
    printf("%lld\n",mul);

    return 0;
}
