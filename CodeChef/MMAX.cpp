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

int mod(string num, ll a)
{
    int res = 0;
    for (ll i = 0; i < num.length(); i++)
         res = (res*10 + (ll)num[i] - '0') %a;
    return res;
}

int main(){
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    S(lie);
    while(lie--){
        S(n);
        string s;
        cin>>s;
        z=mod(s,n);
        if(z==0)
            printf("%lld\n",0LL);
        else{
            x=z;
            y=n-x;
//            printf("%lld\n%lld\n",x,y);
            if(x==y) printf("%lld\n",x+y-1);
            else printf("%lld\n",(min(x,y)+1)*2-2);
        }
    }

    return 0;
}

