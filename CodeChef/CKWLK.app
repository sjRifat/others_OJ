#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		sp              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,k,lie,m=1,n,o,x,y,z,ar[200010];
    vll v;
    v.pb(m);
    for(i=1;i<=36;i++){
        m*=2;
        v.pb(m);
    }
    S(t);
    while(t--){
        ll s=0,ss=0;
        S(n);
        while(n%10==0){
            n/=10;
            s++;
        }
        bool bb=binary_search(all(v),n);
        if(!bb) printf("No\n");
        else{
            while(n>1){
                n/=2;
                ss++;
            }
            if(s<ss) printf("No\n");
            else printf("Yes\n");
        }
    }

    return 0;
}
