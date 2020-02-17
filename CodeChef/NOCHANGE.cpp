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
#define		OO              1000000000

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,xx,yy;
    S(t);
    while(t--){
        set<ll>st;
        map<ll,ll>mp;
        SS(n,k);
        ll p=0,pp=0;
        for(i=0;i<n;i++){
            S(a);
            mp[a]=i;
            if(a!=1 && a!=k) st.insert(a);
        }
        if(zz(st)==0){
            printf("NO\n");
            continue;
        }
        vll v(zz(st));
        copy(all(st),v.begin());
        if(zz(v)==1){
            if(k%v[0]==0) printf("NO\n");
            else{
                printf("YES ");
                for(i=0;i<n;i++){
                    if(mp[v[0]]==i) printf("%lld ",k/v[0]+1);
                    else printf("0 ");
                }
                printf(nn);
            }
        }
        else{
            ll p=0,pp=0,f=0,ff=0,z=0,zz=0;
            for(i=1;i<zz(v);i++){
                if(k%v[i-1]!=0){
                    x=v[i-1];
                    f=1;
                    break;
                }
                if(k%v[i]!=0){
                    x=v[i];
                    f=1;
                    break;
                }
                if(v[i]%v[i-1]!=0){
                   pp++;
                   if(pp==1){
                    xx=v[i-1];
                    yy=v[i];
                   }
                }
            }
            if(f==1){
                printf("YES ");
                for(i=0;i<n;i++){
                    if(mp[x]==i) printf("%lld ",k/x+1);
                    else printf("0 ");
                }
                printf(nn);
            }
            else if(pp){
                printf("YES ");
                for(i=0;i<n;i++){
                    if(mp[yy]==i && z==0){
                        printf("%lld ",k/yy-1);
                        z++;
                        continue;
                    }
                    if(mp[xx]==i && zz==0){
                        printf("%lld ",(k-(k/yy-1)*yy)/xx+1);
                        zz++;
                        continue;
                    }
                    printf("0 ");
                }
                printf(nn);
            }
            else printf("NO\n");
        }
    }

    return 0;
}
