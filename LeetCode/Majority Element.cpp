class Solution {
public:
    int majorityElement(vector<int>& v) {
        sort(v.begin(),v.end());
        int n=v.size();
        n>>=1;
        return v[n];
    }
};
