#include<bits/stdc++.h>
using namespace std;
#define     pb              push_back
#define     PB              pop_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     se              ' '
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
typedef     long long       ll;
typedef     vector<ll>      vll;

ll ar[]={1,2,3,5,6,7,10,11,14,15,19,23};

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c,i,j,t,k=0,lie,n,o,p=0,x,y,z;
    S(t);
    while(t--){
        SS(a,b);
        if(a>23) printf("%lld\n",b-a+1);
        else if(b<=23){
            ll s=0;
            for(i=a;i<=b;i++){
                for(j=0;j<12;j++){
                    if(i==ar[j]){
                        s++;
                        break;
                    }
                }
            }
            printf("%lld\n",b-a-s+1);
        }
        else{
            ll s=0;
            for(i=a;i<=23;i++){
                for(j=0;j<12;j++){
                    if(i==ar[j]){
                        s++;
                        break;
                    }
                }
            }
            printf("%lld\n",b-a-s+1);
        }
    }

    return 0;
}
