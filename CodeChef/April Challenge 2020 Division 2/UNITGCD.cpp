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

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,n,j,t,q,s,k,x;
    S(t);
    while(t--){
        S(n);
        if(n<4){
            if(n==1) printf("1\n");
            else printf("%lld\n",n/2);
            printf("%lld ",n);
            for(i=1;i<=n;i++) cout<<i<<ss;
            cout<<nn;
        }
        else{
            printf("%lld\n",n/2);
            printf("3 ");
            for(i=1;i<=3;i++) cout<<i<<ss;
            cout<<nn;
            if(n&1){
                for(i=4;i<=n;i+=2){
                    printf("2 %lld %lld\n",i,i+1);
                }
            }
            else{
                for(i=4;i<n;i+=2){
                    printf("2 %lld %lld\n",i,i+1);
                }
                printf("1 %lld\n",i,i+1);
            }
        }
    }

    return 0;
}
