class Solution {
public:
    int arrayNesting(vector<int>& ar) {
        int n=ar.size(),i,mx=0;
        int ct[20010]={0};
        for(i=0;i<n;i++){
            int x=ar[i];
            int z=x;
            vector<int>v;
            v.push_back(x);
            unordered_set<int>st;
            if(ct[x]==0){
                ct[x]=1;
                while(1){
                    int y=ar[x];
                    v.push_back(y);
                    if(y==z){
                        mx=max(mx,(int)st.size());
                        for(int j=0;j<(int)v.size();j++) ct[v[j]]=1;
                        break;
                    }
                    if(st.find(y)!=st.end()){
                        break;
                    }
                    st.insert(y);
                    x=y;
                }
            }
            
        }
        return mx+1;
    }
};
