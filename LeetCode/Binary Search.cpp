class Solution {
public:
    int search(vector<int>& v, int n) {
        bool bb=binary_search(v.begin(),v.end(),n);
        if(bb){
            auto it=lower_bound(v.begin(),v.end(),n);
            return it-v.begin();
        }
        return -1;
    }
};
