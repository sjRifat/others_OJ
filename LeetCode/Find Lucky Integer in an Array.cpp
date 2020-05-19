class Solution {
public:
    int findLucky(vector<int>& v) {
        int cnt[555]={0},i,x=-1;
        for(i=0;i<v.size();i++) cnt[v[i]]++;
        for(i=0;i<505;i++){
            if(cnt[i]==i) x=i;
        }
        if(!x) return -1;
        return x;
    }
};
