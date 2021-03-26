#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef	    long long       ll;
typedef	    vector<ll>      vll;
#define	    ss              ' '
#define	    nn              "\n"
#define	    fi              first
#define	    se              second
#define	    PB              pop_back
#define     pb              push_back
#define	    pi              acos(-1.0)
#define	    gcd(a,b)        __gcd(a,b)
#define	    OO              1000000007
#define	    OOO             0.000001
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
typedef     tree<double,null_type,less<double>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

ll ar[200010];
void solve(){
    ll a=1,b=0,c=0,n,i,j,k,m,o,x=1,z;
    ll p=0,sm=0,cnt=0,mx=-OO,mn=OO;
    ordered_set os;
    map<ll,ll>mp;
    while(S(n)){
        if(n==0){
            return;
        }
        else if(n==-1){
            x=(zz(os)+1)/2-1;
            double y=*os.find_by_order(x);
            P((ll)y);
            os.erase(y);
        }
        else{
            mp[n]++;
            double d=n*1.0+((mp[n]*1.0)*OOO);
            os.insert(d);
        }
    }
}

int main(){
//	freopen("input.txt", "r", stdin);
    ll t;
    S(t);
    while(t--)
        solve();

    return 0;
}
