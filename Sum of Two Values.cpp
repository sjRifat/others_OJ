#include<bits/stdc++.h>
using namespace std;
typedef	    long long       ll;
typedef	    vector<ll>      vll;
#define	    ss              ' '
#define	    nn              "\n"
#define	    PB              pop_back
#define     pb              push_back
#define	    pi              acos(-1.0)
#define	    gcd(a,b)        __gcd(a,b)
#define	    OO              1000000007
#define	    NN              printf("\n")
#define	    zz(v)           (ll)v.size()
#define	    lcm(a,b)        (a*b)/gcd(a,b)
#define     no              printf("NO\n")
#define     mo              printf("-1\n")
#define     yes             printf("YES\n")
#define     S(a)            scanf("%lld",&a)
#define	    all(p)          p.begin(),p.end()
#define     P(a)            printf("%lld\n",a)
#define     db              printf("be steady\n")
#define	    mms(ar,a)       memset(ar,a,sizeof(ar))
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     PP(a,b)         printf("%lld %lld\n",a,b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)

ll ar[200010];
void solve(){
    ll a,b,c=0,i,j,k,m,n,o,x,y,z;
    ll p=0,sm=0,cnt=0,mx=0,mn=OO;
    SS(n,x);
    map<ll,ll>mp;
    for(i=0;i<n;i++){
        S(ar[i]);
        if(ar[i]+ar[i]==x and c==0) a=i+1,c=1;
        else if(ar[i]+ar[i]==x and c==1) b=i+1,c=2;
        mp[ar[i]]=i+1;
    }
    if(c==2){
        PP(a,b);
        return;
    }
    sort(ar,ar+n);
    i=0;
    j=n-1;
    while(i<j){
        if(ar[i]+ar[j]==x){
            PP(mp[ar[i]],mp[ar[j]]);
            return;
        }
        else if(ar[i]+ar[j]<x) i++;
        else j--;
    }
    printf("IMPOSSIBLE\n");
}

int main(){
//	freopen("input.txt", "r", stdin);
//    ll t;
//    S(t);
//    while(t--)
        solve();

    return 0;
}
