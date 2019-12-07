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

ll fx[]={ 1, -1,  0,  0};   // 4 direction
ll fy[]={ 0,  0,  1, -1};  // 4 direction

string s[33];
ll pl=0;

void flood_fill(ll i,ll j){
    if(i<1 || j<1 || i>28 || j>28) return;
    if(s[i][j]=='.'){
        s[i][j]='*';
        for(ll k=0;k<4;k++){
            ll x=i+fx[k];
            ll y=j+fy[k];
            if(s[x][y]=='G'){
                pl=1;
                break;
            }
            flood_fill(x,y);
        }
    }
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];

    while(cin>>s[0]){
        ll p=0;
        pl=0;
        for(i=1;i<30;i++) cin>>s[i];

        for(i=0;i<30;i++){
            for(j=0;j<30;j++){
                if(s[i][j]=='P'){
                    s[i][j]='.';
                    flood_fill(i,j);
                    p=1;
                    break;
                }
            }
            if(p==1) break;
        }
        if(pl==1) printf("Possible\n");
        else printf("Impossible\n");
        for(i=0;i<33;i++) s[i].clear();
    }

    return 0;
}
