class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k) return false;
        int i;
        int ch[26]={0};
        for(i=0;i<(int)s.size();i++){
            ch[s[i]-'a']++;
        }
        int od=0;
        for(i=0;i<26;i++){
            if(ch[i]&1) od++;
        }
        if(od>k) return false;
        return true;
    }
};
