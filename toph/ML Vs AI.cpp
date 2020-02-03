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

struct st{
    ll ac,sb,ps;
}stdnt[1000010];

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,sm=0,les,i,j,t,k,lie,m,n,o,x,y,z,ar[200010];
    S(t);
    n=t;
    for(i=0;i<n;i++){
        SS(a,b);
        stdnt[i].ac=a;
        stdnt[i].sb=b;
        stdnt[i].ps=(a*100)/b;
        sm+=a;
        les;
        if(a<150) les++;

    }
    ll avg=sm/n;
//    cout<<"avg -:> "<<avg<<nn;
    for(i=0;i<n;i++){
        if(stdnt[i].ac>=150 && stdnt[i].ac>=avg && stdnt[i].ps>=70) c++;
//        cout<<stdnt[i].ac<<ss<<stdnt[i].sb<<ss<<stdnt[i].ps<<nn;
    }
    cout<<c<<nn;


    return 0;
}
