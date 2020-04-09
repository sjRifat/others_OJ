#include<bits/stdc++.h>
using namespace std;
typedef	    long long       ll;

ll ar[100000],block[700],bs; // bs->block size

ll query(ll l,ll r){
    ll mn=INT_MAX;
    while(l<r and l%bs!=0 and l!=0){
        mn=min(mn,ar[l]);
        l++;
    }
    while(l+bs<=r){
        mn=min(mn,block[l/bs]);
        l+=bs;
    }
    while(l<=r){
        mn=min(mn,ar[l]);
        l++;
    }
    return mn;
}

void preproces(ll n){
    ll mn=INT_MAX;
    ll blk_idx=-1;
    bs=sqrt(n);
    for(ll i=0;i<n;i++){
        mn=min(mn,ar[i]);
        if(i%bs==0) blk_idx++;
        block[blk_idx]=mn;
        if(i%bs==bs-1) mn=INT_MAX;
    }
}

int main(){
//    freopen("input.txt","r",stdin);
    ll a,b,c=0,i,j,t,k,lie,sm=0,m,n,o,x,y,z,q;
    scanf("%lld",&n);
    for(i=0;i<n;i++) scanf("%lld",&ar[i]);
    preproces(n);
    scanf("%lld",&q);
    while(q--){
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",query(a,b));
    }

    return 0;
}
