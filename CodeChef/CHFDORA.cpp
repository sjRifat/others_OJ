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

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    S(t);
    while(t--){
        SS(n,m);
        ll ar[n+5][m+5],sm=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++) S(ar[i][j]);
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                ll r1=i;
                ll r2=i;
                ll c1=j;
                ll c2=j;
                while(true){
                    if(r1<0 || r2==n) break;
                    if(c1<0 || c2==m) break;
                    if(ar[r1][j]==ar[r2][j] && ar[i][c1]==ar[i][c2]){
                        sm++;
                        r1--;
                        c1--;
                        r2++;
                        c2++;
                    }
                    else break;
                }
            }
        }
        printf("%lld\n",sm);
    }

    return 0;
}
