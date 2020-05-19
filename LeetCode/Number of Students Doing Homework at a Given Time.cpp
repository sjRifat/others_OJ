class Solution {
public:
    int busyStudent(vector<int>& v1, vector<int>& v2, int n) {
        int sm=0;
        for(int i=0;i<(int)v1.size();i++){
            if(v1[i]<=n and v2[i]>=n) sm++;
        }
        return sm;
    }
};
