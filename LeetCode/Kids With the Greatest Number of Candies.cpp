class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& v, int n) {
        int i,j,mx=0;
        vector<bool>bb;
        for(i=0;i<v.size();i++){
            mx=max(mx,v[i]);
        }
        for(i=0;i<v.size();i++){
            if(v[i]+n>=mx) bb.push_back(true);
            else bb.push_back(false);
        }
        return bb;
    }
};
