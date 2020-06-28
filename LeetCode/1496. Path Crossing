class Solution {
public:
    bool isPathCrossing(string s) {
        int x=0,y=0;
        map<pair<int,int>,int>mp;
        pair<int,int>p;
        p=make_pair(x,y);
        mp[p]=1;
        int i,j,n=s.size();
        for(i=0;i<n;i++){
            if(s[i]=='N') y++;
            else if(s[i]=='S') y--;
            else if(s[i]=='W') x--;
            else x++;
            p=make_pair(x,y);
            if(mp[p]==1) return true;
            mp[p]=1;
        }
        return false;
    }
};
