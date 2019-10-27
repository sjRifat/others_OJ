#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

bool ar[1000000];
set<ll>st;
void moderated_sieve(){
    ll i,j,n=1000000;
    for(i=2;i<=n;i++){
        if(ar[i]==0){
            for(j=i*i;j<=n*n;j*=i){
                if(j>n){
                    st.insert(j);
                    continue;
                }
                ar[j]=1;
                st.insert(j);
            }
        }
    }
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    moderated_sieve();
    vll v(zz(st));
    copy(all(st),v.begin());
    S(t);
    while(t--){
        SS(a,b);
        auto it=lower_bound(all(v),a);
        x=it-v.begin();
        if(b==1000000000000) y=1010195;
        else{
            auto itt=upper_bound(all(v),b);
            y=itt-v.begin();
        }
        printf("Case %lld: %lld\n",++c,y-x);
    }

    return 0;
}
