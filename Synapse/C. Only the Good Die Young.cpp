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

struct str{
    ll a,b;
}st[1111];

bool cmp(str x,str y){
    return x.a<y.a;
}

int main(){
//    freopen("input.txt","r",stdin);
    ll b,d,i,j,t,k,lie,m,n,o,x,y,z;
    S(t);
    while(t--){
        SS(m,k);
        ll sm=0,s=0;
        for(i=0;i<m;i++){
            SSS(x,b,d);
            st[i].a=d-b+1;
            st[i].b=x;
            sm+=x;
        }
        if(sm<k){
            printf("-1\n");
            continue;
        }
        sort(st,st+m,cmp);
        for(i=0;i<m;i++){
            if(s<k) s+=st[i].b;
            else break;
        }
        printf("%lld\n",st[i-1].a);
    }

    return 0;
}
