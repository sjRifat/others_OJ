class Solution {
public:
    int maxPower(string s) {
        int n=s.size(),i,j,c=1,mx=1;
        for(i=1;i<n;i++){
            if(s[i]==s[i-1]) c++,mx=max(mx,c);
            else c=1;
        }
        return mx;
    }
};
