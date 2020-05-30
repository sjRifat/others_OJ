class Solution {
public:
    int leastBricks(vector<vector<int>>& v) {
        int i,j;
        map<int,int>mp;
        for(i=0;i<(int)v.size();i++){
            int sm=0;
            for(j=0;j<(int)v[i].size()-1;j++){
                sm+=v[i][j];
                mp[sm]++;
            }
        }
        int mx=0;
        for(auto it : mp){
            mx=max(mx,it.second);
        }
        return (int)v.size()-mx;
    }
};
