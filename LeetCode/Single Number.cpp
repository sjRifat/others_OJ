class Solution {
public:
    int singleNumber(vector<int>& v) {
        int xo=0;
        for(int i=0;i<(int)v.size();i++){
            xo^=v[i];
        }
        return xo;
    }
};
