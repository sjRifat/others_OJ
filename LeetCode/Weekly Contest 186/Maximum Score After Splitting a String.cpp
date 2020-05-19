class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        vector<pair<int,int>>vp;
        int i,j,on=0,ze=0;
        for(i=0;i<n;i++){
            if(s[i]=='0') ze++;
            else on++;
            vp.push_back(make_pair(ze,on));
        }
        int mx=-1,id=0,ct=0;
        for(i=0;i<n-1;i++){
            if(vp[i].first-vp[i].second>mx){
                mx=vp[i].first-vp[i].second;
                id=i;
                ct=vp[i].first;
            }
        }
        for(i=id+1;i<n;i++){
            if(s[i]=='1') ct++;
        }
        return ct;
    }
};
