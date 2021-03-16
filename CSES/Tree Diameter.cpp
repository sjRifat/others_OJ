#include<bits/stdc++.h>
using namespace std;
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

vll v[300010];
ll visited[300010];
ll level[300010],n1=0,n2=0,mx=0;

void bfs(ll u){
    visited[u]=1;
    level[u]=0;
    queue<ll>q;
    q.push(u);
    while(!q.empty()){
        u=q.front();
        q.pop();
        visited[u]=1;

        for(ll i=0;i<zz(v[u]);i++){
            ll p=v[u][i];
            if(!visited[p]){
                visited[p]=1;
                level[p]=level[u]+1;
                if(level[p]>mx){
                    mx=level[p];
                    n1=p;
                }
                q.push(p);
            }
        }
    }
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll a,b,c,s,d,i,j,t,k,n;
    scanf("%lld",&n);
    for(i=1;i<n;i++){
       scanf("%lld %lld",&a,&b);
       v[a].push_back(b);
       v[b].push_back(a);
    }
    bfs(1);
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
    bfs(n1);
    printf("%lld\n",mx);

    return 0;
}
