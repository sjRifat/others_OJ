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

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    S(t);
    while(t--){
        SS(a,b);
        if(a!=1 || b!=1){
            x=(a+b)/2;
            cout<<33<<nn<<x<<ss<<x<<nn;
        }
        else cout<<32<<nn;
        cout<<1<<ss<<1<<nn<<2<<ss<<2<<nn;
        cout<<1<<ss<<3<<nn;
        cout<<3<<ss<<1<<nn;

        cout<<4<<ss<<2<<nn;
        cout<<5<<ss<<1<<nn;
        cout<<3<<ss<<3<<nn;
        cout<<2<<ss<<4<<nn;
        cout<<1<<ss<<5<<nn;

        cout<<2<<ss<<6<<nn;
        cout<<1<<ss<<7<<nn;
        cout<<3<<ss<<5<<nn;
        cout<<4<<ss<<4<<nn;
        cout<<5<<ss<<3<<nn;
        cout<<6<<ss<<2<<nn;
        cout<<7<<ss<<1<<nn;

        cout<<8<<ss<<2<<nn;
        cout<<7<<ss<<3<<nn;
        cout<<6<<ss<<4<<nn;
        cout<<5<<ss<<5<<nn;
        cout<<4<<ss<<6<<nn;
        cout<<2<<ss<<8<<nn;
        cout<<3<<ss<<7<<nn;

        cout<<4<<ss<<8<<nn;
        cout<<5<<ss<<7<<nn;
        cout<<6<<ss<<6<<nn;
        cout<<8<<ss<<4<<nn;
        cout<<7<<ss<<5<<nn;

        cout<<8<<ss<<6<<nn;
        cout<<6<<ss<<8<<nn;
        cout<<7<<ss<<7<<nn;
        cout<<8<<ss<<8<<nn;
    }

    return 0;
}
