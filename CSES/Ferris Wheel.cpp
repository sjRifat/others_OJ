#include<bits/stdc++.h>
using namespace std;
typedef         long long       ll;
typedef         vector<ll>      vll;
#define         ss              ' '
#define         nn              "\n"
#define         fi              first
#define         se              second
#define         PB              pop_back
#define         pb              push_back
#define         pi              acos(-1.0)
#define         gcd(a,b)        __gcd(a,b)
#define         OO              1000000007
#define         NN              printf("\n")
#define         zz(v)           (ll)v.size()
#define         lcm(a,b)        (a*b)/gcd(a,b)
#define         no              printf("NO\n")
#define         mo              printf("-1\n")
#define         yes             printf("YES\n")
#define         S(a)            scanf("%lld",&a)
#define         all(p)          p.begin(),p.end()
#define         P(a)            printf("%lld\n",a)
#define         db              printf("be steady\n")
#define         mms(ar,a)       memset(ar,a,sizeof(ar))
#define         SS(a,b)         scanf("%lld %lld",&a,&b)
#define         PP(a,b)         printf("%lld %lld\n",a,b)
#define         SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)

ll ar[200010];
void solve(){
    ll a=4,b,c=0,n,i,j,k,m,o,x,y=0,z;
    ll p=0,sm=0,cnt=0,mx=-OO,mn=OO;
    SS(n,x);
    for(i=0;i<n;i++) S(ar[i]);
    sort(ar,ar+n);
    i=0,j=n-1;
    while(i<j){
        if(ar[i]+ar[j]<=x) c++,i++,j--;
        else c++,j--;
    }
    if(i==j) c++;
    P(c);
}

int main(){
//    freopen("input.txt", "r", stdin);
//    ll t;
//    S(t);
//    while(t--)
        solve();

    return 0;
}
