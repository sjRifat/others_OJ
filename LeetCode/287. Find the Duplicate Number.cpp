class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int n=v.size(),i,j;
        sort(v.begin(),v.end());
        for(i=0;;i++){
            if(v[i]==v[i+1]) return v[i];
        }
    }
};
