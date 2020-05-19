class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& v) {
        int i,j,x,y,mx=0;
        int n=v.size();
        vector<int>ans;
        vector<pair<int,int>>vp;
        for(i=0;i<n;i++){
            for(j=0;j<(int)v[i].size();j++){
                vp.push_back(make_pair(i+j,j));
            }
        }
        sort(vp.begin(),vp.end());
        for(i=0;i<(int)vp.size();i++) ans.push_back(v[vp[i].first-vp[i].second][vp[i].second]);
        return ans;
    }
};
