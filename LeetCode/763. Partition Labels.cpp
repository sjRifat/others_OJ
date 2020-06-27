class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size(),i,j;
        vector<int>v,vv;
        v.push_back(-1);
        map<char,int>mp;
        for(i=0;i<n;i++){
            mp[s[i]]=i;
        }
        int mx=mp[s[0]];
        for(i=0;i<n;i++){
            if(i==mx) v.push_back(i),mx=mp[s[i+1]];
            else mx=max(mx,mp[s[i]]);
        }
        if(v.back()+1!=n) v.push_back(v.back()+1);
        for(i=0;i<v.size()-1;i++) vv.push_back(v[i+1]-v[i]);
        return vv;
    }
};
