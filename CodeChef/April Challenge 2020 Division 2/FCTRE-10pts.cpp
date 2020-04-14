#include<bits/stdc++.h>
using namespace std;
#define mod     1000000007

vector<long long>v[100010];
map<long long,long long>mp;
long long visited[100010],pt[100010],ct[1000010];

void bfs(long long u,long long b){
    memset(visited,0,sizeof(visited));
    visited[u]=1;
    queue<long long>q;
    q.push(u);
    pt[u]=u;
    while(!q.empty()){
        u=q.front();
        if(u==b) return;
        q.pop();
        for(long long i=0;i<(long long)v[u].size();i++){
            long long p=v[u][i];
            if(!visited[p]){
                visited[p]=1;
                pt[p]=u;
                q.push(p);
            }
            if(p==b) return;
        }
    }
}

bool ar[1000010];
vector<long long> vp;
void sieve(){
    long long i,j,n=1000010;
    vp.push_back(2LL);
    for(i=3;i<n;i+=2){
        if(ar[i]==0){
            vp.push_back(i);
            if(i>n/i) continue;
            for(j=i*i;j<=n;j+=(i+i)) ar[j]=1;
        }
    }
}

int main()
{
//    freopen("input.txt","r",stdin);
    sieve();
    long long a,b,i,j,m,n,t,q,x,mx,y;
    scanf("%lld",&t);
    while(t--){
        for(i=0;i<100010;i++) v[i].clear();
        scanf("%lld",&n);
        mx=0;
        for(i=1;i<n;i++){
            scanf("%lld %lld",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
//            mx=max(a,max(b,mx));
        }
        for(i=1;i<=n;i++){
            scanf("%lld",&a);
            mp[i]=a;
        }
        scanf("%lld",&q);
        while(q--){
            scanf("%lld %lld",&a,&b);
            bfs(a,b);
            memset(ct,0,sizeof(ct));
            long long now=b;
            x=mp[b];
            long long sm=1;
            for(i=0;vp[i]<=x;i++){
                if(x%vp[i]==0){
                    while(x%vp[i]==0){
                        ct[vp[i]]++;
                        x/=vp[i];
                    }
                }
            }
            if(x!=1) ct[x]++;
            while(now!=a){
                now=pt[now];
                x=mp[now];
                for(i=0;vp[i]<=x;i++){
                    if(x%vp[i]==0){
                        while(x%vp[i]==0){
                            ct[vp[i]]++;
                            x/=vp[i];
                        }
                    }
                }
                if(x!=1) ct[x]++;
            }
            for(i=2;i<1000010;i++){
                if(ct[i]){
                    x=ct[i]+1;
                    sm*=x;
                    sm%=mod;
                }
            }
            printf("%lld\n",sm);
        }
    }

    return 0;
}
