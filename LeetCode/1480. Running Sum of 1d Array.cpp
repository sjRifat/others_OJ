class Solution {
public:
    vector<int> runningSum(vector<int>& v) {
        vector<int>vv;
        int n=v.size(),i,j,s=0;
        for(i=0;i<n;i++){
            s+=v[i];
            vv.push_back(s);
        }
        return vv;
    }
};
