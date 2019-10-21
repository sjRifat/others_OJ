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
    ll a,b,c,i,j,t,k,lie,m,n,o,x,y,z;
    S(lie);
    while(lie--){
        S(n);
        string s;
        x=1000;
        c=0;
        ll ar[26]={0};
        while(n--){
            cin>>s;
            for(i=0;i<zz(s);i++){
                if(s[i]=='c' || s[i]=='o' || s[i]=='d' || s[i]=='e' || s[i]=='h' || s[i]=='f')
                    ar[s[i]-'a']++;
            }
        }
        ar[2]/=2;
        ar[4]/=2;
        for(i=0;i<26;i++){
            if(ar[i]){
                c++;
                x=min(x,ar[i]);
            }
        }
//        cout<<ar[i]<<ss;
        if(c<=5) printf("%lld\n",0LL);
        else printf("%lld\n",x);
//        cout<<c<<nn<<nn;
    }


    return 0;
}
