#include<bits/stdc++.h>
using namespace std;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define		all(p)          p.begin(),p.end()
#define		zz(v)           v.size()
#define		ss              ' '
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef		long long       ll;
typedef		vector<ll>      vll;

int main()
{
    ll a,b,c,i,j,t,k,lie,m,n,o,x=INT_MAX,y=INT_MAX,z;
    S(t);
    while(t--){
        S(n);
        x=INT_MAX;
        y=INT_MAX;
        vll v,vv,v1,v2;
        for(i=0;i<=34;i++){
            vv.pb(pow(2,i));
        }
        bool bb=binary_search(all(vv),n);
        if(bb) printf("IMPOSSIBLE\n");
        else if(n%2) printf("%lld = %lld + %lld\n",n,n/2,n/2+1);
        else if(n%3==0) printf("%lld = %lld + %lld + %lld\n",n,n/3-1,n/3,n/3+1);
        else if(n%4==2) printf("%lld = %lld + %lld + %lld + %lld\n",n,n/4-1,n/4,n/4+1,n/4+2);
        else{
            ll p=0;
            for(i=2;i<=sqrt(n);i++){
                if(n%i==0){
                    if(i%2==1){
                        v.pb(i);
                        break;
                    }
                    if((n/i)%2==1) v.pb(n/i);
                }
            }
            sort(all(v));
            x=v[0];
//            cout<<x<<nn;
            for(i=4;i<=n;i+=4){
                if(n%i==i/2 && n>=(i*(i+1))/2){
                    y=i;
                    break;
                }
            }
//            cout<<y<<nn;
            if(x<=y){
//                    cout<<x<<nn;
                printf("%lld = ",n);
                for(i=n/x-x/2;i<=n/x+x/2;i++) v1.pb(i);
                for(i=0;i<zz(v1)-1;i++) printf("%lld + ",v1[i]);
                printf("%lld\n",v1[zz(v1)-1]);
            }
            else{
//                    cout<<y<<nn;
                printf("%lld = ",n);
                for(i=n/y-y/2+1;i<=n/y+y/2;i++) v2.pb(i);
                for(i=0;i<zz(v2)-1;i++) printf("%lld + ",v2[i]);
                printf("%lld\n",v2[zz(v2)-1]);
            }
        }
    }

    return 0;
}
