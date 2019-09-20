
#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

bool ar[1000010];
vll v;
void sieve(){
    ll n=1000010;
    ll i,j;
    v.pb(2LL);
    for(i=3;i<n;i+=2){
        if(ar[i]==0){
            v.pb(i);
            if(i>n/i) continue;
            for(j=i*i;j<=n;j+=(i+i)) ar[j]=1;
        }
    }
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,k,lie,n,o,x,y,z;
    sieve();
    S(t);
    while(t--){
        S(a);
        bool b=binary_search(all(v),a);
        if(b) printf("%lld is a prime number.\n",a);
        else printf("%lld is not a prime number.\n",a);
    }

    return 0;
}
