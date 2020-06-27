class Solution {
public:
    string customSortString(string s, string t) {
        int ct[200]={0};
        int i,j,n,k;
        for(i=0;i<t.size();i++) ct[t[i]]++;
        string ss;
        for(i=0;i<s.size();i++){
            for(j=0;j<t.size();j++){
                if(s[i]==t[j]){
                    for(k=0;k<ct[s[i]];k++){
                        ss.push_back(s[i]);
                    }
                    break;
                }
            }
        }
        for(i=0;i<t.size();i++){
            int p=0;
            for(j=0;j<s.size();j++){
                if(t[i]==s[j]){
                    p=1;
                    break;
                }
            }
            if(p==0) ss.push_back(t[i]);
        }
        return ss;
    }
};
