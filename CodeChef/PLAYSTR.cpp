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

int main(){
//    freopen("in.txt","r",stdin);
    ll a,b,c,i,j,t,k,lie,m=998244353,n,o,x=1,y,z,ar[200010];
    S(a);
    while(a--){
        string s1,s2;
        S(n);
        cin>>s1>>s2;
        ll c1=0,c0=0,c2=0,c3=0;
        for(i=0;i<n;i++){
            if(s1[i]=='1') c1++;
            else c0++;
            if(s2[i]=='1') c3++;
            else c2++;
        }
        if(c1==c3 && c2==c0) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
