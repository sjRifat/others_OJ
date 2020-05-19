class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& v) {
        vector<int> v1;
        int i,j;
        map<int,int>mp;
        int cnt[100010]={0};
        for(i=0;i<(int)v.size();i++){
            int mn=INT_MAX;
            for(j=0;j<(int)v[i].size();j++){
                mn=min(mn,v[i][j]);
            }
            cnt[mn]=1;
        }
        for(i=0;i<(int)v[0].size();i++){
            int mx=0;
            for(j=0;j<(int)v.size();j++){
                mx=max(mx,v[j][i]);
            }
            if(cnt[mx]) v1.push_back(mx);
        }
        return(v1);
    }
};
