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
#define		OO              10000000000

vll prefix_function(string s){
    ll n=zz(s);
    vll pf(n);
    for(ll i=1;i<n;i++){
        ll j=pf[i-1];
        while(j>0 && s[i]!=s[j]) j=pf[j-1];
        if(s[i]==s[j]) j++;
        pf[i]=j;
    }
    return pf;
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z;
    while(S(n)==1){
        if(c>0) printf(nn);
        c++;
        ll ar[1010],sm=0,p=0,tp[1010];
        string pt,tx;
        cin>>pt>>tx;
        string s=pt+"&"+tx;
        vll v=prefix_function(s);
        for(i=0;i<zz(v);i++){
            if(v[i]==zz(pt)) printf("%lld\n",i-zz(pt)*2);
        }
    }

    return 0;
}
