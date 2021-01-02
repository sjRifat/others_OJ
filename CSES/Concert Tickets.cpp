#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
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
typedef     tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

ll ar[200010];
void solve(){
    ll a,b,c=0,i,j,k,m,n,o,x,y,z;
    ll p=0,sm=0,cnt=0,mx=0,mn=OO;
    ordered_set os;
    map<ll,ll>mp;
    SS(n,m);
    while(n--){
        S(a);
        mp[a]++;
        os.insert(a);
    }
    os.insert(OO);
    while(m--){
        S(a);
        auto it=os.upper_bound(a);
        x=os.order_of_key(*it);
        x--;
        if(x<0) printf("-1\n");
        else P(*os.find_by_order(x));
        y=*os.find_by_order(x);
        mp[y]--;
        if(mp[y]==0) os.erase(*os.find_by_order(x));
    }
}

int main(){
//	freopen("input.txt", "r", stdin);
//    ll t;
//    S(t);
//    while(t--)
        solve();

    return 0;
}
