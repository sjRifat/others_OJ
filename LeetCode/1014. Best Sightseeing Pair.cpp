class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v) {
        vector<int>ii,jj,tp;
        int i;
        for(i=0;i<(int)v.size();i++){
            ii.push_back(i+v[i]);
            jj.push_back(v[i]-i);
        }
        reverse(jj.begin(),jj.end());
        int mx=-100000000;
        for(i=0;i<(int)jj.size();i++){
            mx=max(mx,jj[i]);
            tp.push_back(mx);
        }
        reverse(tp.begin(),tp.end());
        mx=-100000000;
        for(i=0;i<(int)ii.size()-1;i++){
            mx=max(mx,ii[i]+tp[i+1]);
        }
        return mx;
    }
};
