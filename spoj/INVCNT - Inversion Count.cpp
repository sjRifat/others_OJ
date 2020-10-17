#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ar[200010];
ll tree[200010];

ll query(ll idx){
    ll sum=0;
    while(idx>0){
        sum+=tree[idx];
        idx-=(idx&-idx);
    }
    return sum;
}

void update(ll idx,ll val,ll n){
    while(idx<=n){
        tree[idx]+=val;
        idx+=(idx&-idx);
    }
}

int main(){
    ll n,a,b,i,j,q,x,t;
    scanf("%lld",&t);
    while(t--){
        memset(tree,0,sizeof(tree));
        scanf("%lld",&n);
        ll sm=0,c=0;
        map<int,int>mp;
        set<int>st;
        for(i=1;i<=n;++i){
            scanf("%lld",&ar[i]);
            st.insert(ar[i]);
        }
        for(auto it : st) mp[it]=++c;
        for(i=1;i<=n;i++) ar[i]=mp[ar[i]];
        for(i=1;i<=n;i++){
            sm+=(query(n)-query(ar[i]));
            update(ar[i],1,n);
        }
        printf("%lld\n",sm);
    }

    return 0;
}
