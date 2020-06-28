class Solution {
public:
    int longestSubarray(vector<int>& v) {
        int i,n,c=0,sm=0,x,mx=0;
        n=v.size();
        vector<int>vv;
        vv.push_back(-1);
        for(i=0;i<n;i++){
            if(v[i]==0) vv.push_back(i);
        }
        vv.push_back(n);
        if(vv.size()==2) return n-1;
        if(vv.size()==n+2) return 0;
        for(i=1;i<vv.size()-1;i++){
            x=(vv[i]-vv[i-1])+(vv[i+1]-vv[i]);
            mx=max(mx,x);
        }
        return mx-2;
    }
};
