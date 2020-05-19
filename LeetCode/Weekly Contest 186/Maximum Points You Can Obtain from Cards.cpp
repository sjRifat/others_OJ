class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int n=v.size();
        vector<int>v1,v2;
        int mx=0,s1=0,s2=0,i;
        for(i=0;i<k;i++) v1.push_back(v[i]),s1+=v[i];
        reverse(v.begin(),v.end());
        reverse(v1.begin(),v1.end());
        for(i=0;i<k;i++) v2.push_back(v[i]);
        mx=s1;
        int x=0,y=0;
        for(i=0;i<k;i++){
            s1-=v1[i];
            s2+=v2[i];
            mx=max(mx,s1+s2);
        }
        return mx;
    }
};
