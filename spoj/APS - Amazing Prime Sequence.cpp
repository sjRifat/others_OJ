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

bool ar[10000001];
vll v;
ll pre[10000001];

void sieve(){
    ll i,j,n=10000001;
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
    ll a,b,c,i,j,t,k=2,lie,m,n,s=0,o,x,y,z;
    sieve();
    for(i=2;i<=10000000;i++){
        if(i%2==0) pre[i]=pre[i-1]+2;
        else{
            if(!ar[i]) pre[i]=pre[i-1]+i;
            else{
                for(j=0;v[j]*v[j]<=i;j++){
                    if(i%v[j]==0){
                        pre[i]=pre[i-1]+v[j];
                        break;
                    }
                }
            }
        }
    }
    S(t);
    while(t--){
        S(n);
        printf("%lld\n",pre[n]);
    }

    return 0;
}
