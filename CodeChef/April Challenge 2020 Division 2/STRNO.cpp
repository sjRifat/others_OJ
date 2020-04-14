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

bool ar[100010];
vll v;
void sieve(){
    ll i,j,n=100010;
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
    ll a,b,c,i,n,j,t,q,s,k,x;
    sieve();
    S(t);
    while(t--){
        ll ar[1010];
        SS(n,k);
        c=0;
        for(i=0;v[i]*v[i]<=n;i++){
            if(n%v[i]==0){
                while(n%v[i]==0){
                    c++;
                    n/=v[i];
                }
            }
        }
        if(n>1) c++;
        if(c>=k) printf("1\n");
        else printf("0\n");
    }

    return 0;
}
