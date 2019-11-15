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

ll ar[100010],n,x,a;

int main()
{
//    freopen("input.txt","r",stdin);
    ll b,i,j,t,c=0,k,s=0,y,z,node,edge,level[111111];
    mms(level,-1);
    SS(a,x);
    S(n);
    for(i=0;i<n;i++) S(ar[i]);
    level[a]=0;
    queue<ll>q;
    q.push(a);
    c++;
    while(!q.empty()){
        a=q.front();
        q.pop();
        if(a==x) break;
        for(ll i=0;i<n;i++){
            ll p=((a%100000)*(ar[i]%100000))%100000;
            if(level[p]==-1){
                level[p]=level[a]+1;
                q.push(p);
            }
            if(p==x) break;
        }
        if(level[x]!=-1) break;
    }
    printf("%lld\n",level[x]);

    return 0;
}
