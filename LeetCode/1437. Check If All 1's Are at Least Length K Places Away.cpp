class Solution {
public:
    bool kLengthApart(vector<int>& v, int k) {
        int n=v.size(),i,j,p=0;
        vector<int>vv;
        for(i=0;i<n;i++){
            if(v[i]==1) vv.push_back(i);
        }
        for(i=0;i<(int)vv.size()-1;i++){
            if(vv[i+1]-vv[i]<=k) p=1;
        }
        if(p) return false;
        return true;
    }
};
