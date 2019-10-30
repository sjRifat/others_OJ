#include<bits/stdc++.h>
using namespace std;
#define     pb              push_back
#define     PB              pop_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     ss              ' '
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     pi              acos(-1.0)
typedef     long long       ll;
typedef     vector<ll>      vll;

ll fx[]={ 1, -1,  0,  0};   // 4 direction
ll fy[]={ 0,  0,  1, -1};  // 4 direction
ll n,m,cnt;
ll ar[11][11];
bool bb;

void flood_fill(ll i,ll j){
    if(i<0 || j<0 || i>n-1 || j>n-1) return;
    if(ar[i][j]==1){
        if(i==n-1 && j==m-1) bb=true;
        ar[i][j]=0;
        for(ll k=0;k<4;k++){
            ll x=i+fx[k];
            ll y=j+fy[k];
            flood_fill(x,y);
        }
    }
}

int main()
{
//    freopen("in.txt","r",stdin);
    ll i,j,b,c=0,t,a,p,x;
    SS(n,m);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++) S(ar[i][j]);
    }
    flood_fill(0,0);
    if(bb) printf("Yes\n");
    else printf("No\n");

    return 0;
}
