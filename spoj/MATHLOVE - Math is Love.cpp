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
#define		OO              3000000000
 
int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k=2,lie,m,n,s=0,o,x,y,z,ar[200010];
    vll v;
    v.pb(0);
    for(i=1;i<=OO;){
        v.pb(i);
        i+=k;
        k++;
    }
    S(t);
    while(t--){
        S(n);
        bool bb=binary_search(all(v),n);
        if(bb){
            auto it=lower_bound(all(v),n);
            z=it-v.begin();
            printf("%lld\n",z);
        }
        else printf("NAI\n");
    }
 
    return 0;
}
 
