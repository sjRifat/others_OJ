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

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,i,n,j,t,q,s,k,x,y;
    S(t);
    while(t--){
        ll ar[100010],p=0,sm=0,in=0;
        S(n);
        vll v;
        for(i=0;i<n;i++) S(ar[i]);
        for(i=0;i<n;i++){
            if(ar[i]%2==0) v.pb(i);
            if(ar[i]&1){
                in++;
                sm+=in;
            }
            else if(ar[i]%4==0){
                in=i+1;
                sm+=in;
            }
            else if(ar[i]%2==0){
                if(zz(v)==1) in=0;
                else{
                    in=v[zz(v)-2]+1;
                    sm+=in;
                }
            }
        }
        P(sm);
    }

    return 0;
}
