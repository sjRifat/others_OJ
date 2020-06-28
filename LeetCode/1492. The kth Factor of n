class Solution {
public:
    int kthFactor(int n, int k) {
        int i,j;
        vector<int>v;
        for(i=1;i<=n;i++){
            if(n%i==0) v.push_back(i);
        }
        if(v.size()<k) return -1;
        return v[k-1];
    }
};
