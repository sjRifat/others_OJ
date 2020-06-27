class Solution {
public:
    vector<int> searchRange(vector<int>& v, int t) {
        vector<int>vv{-1,-1},vvv;
        bool bb=binary_search(v.begin(), v.end(), t);
        if(!bb) return vv;
        auto it = lower_bound (v.begin(), v.end(), t);
        int l=it-v.begin();
        auto itt=upper_bound (v.begin(), v.end(), t);
        int r=itt-v.begin()-1;
        vvv.push_back(l);
        vvv.push_back(r);
        return vvv;
    }
};
