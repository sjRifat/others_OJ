#include<bits/stdc++.h>
using namespace std;
 
vector<int>v[11111];
vector<int>ans;
int in[11111];
 
bool Kahn(int n){
    priority_queue<int>pq;
    for(int i=1;i<=n;i++){
        if(in[i]==0) pq.push(-i);
    }
    while(!pq.empty()){
        int cur=-pq.top();
        ans.push_back(cur);
        pq.pop();
        for(int node : v[cur]){
            in[node]--;
            if(!in[node]) pq.push(-node);
        }
    }
    return ans.size()==n;
}
 
int main()
{
    int n,t,i,j,m,a,b;
    scanf("%d %d",&n,&m);
    while(m--){
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        in[b]++;
    }
    bool bb=Kahn(n);
    if(!bb) printf("Sandro fails.\n");
    else for(i=0;i<(int)ans.size();i++) printf("%d ",ans[i]);
 
    return 0;
}
 
