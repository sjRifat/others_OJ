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
#define		OO              10000000000
 
int main(){
//    freopen("input.txt","r",stdin);
    ll b,d,e,f,g,i,j,t,k=0,lie,m,n,o,x,y,z=0;
    S(t);
    while(t--){
        ll ar[1001];
        S(n);
        double d=0,a,c=1,sm=0;
        d=1.0/(n*1.0);
        while(n--){
            cin>>a;
            sm+=(d*a);
        }
        printf("%.8f\n",sm);
    }
 
    return 0;
} 
