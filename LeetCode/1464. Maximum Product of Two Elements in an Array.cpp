class Solution {
public:
    int maxProduct(vector<int>& v) {
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        return (v[0]-1)*(v[1]-1);
    }
};
