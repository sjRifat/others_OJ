class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1>s2) swap(s1,s2);
        int p=0;
        for(int i=0;i<(int)s1.size();i++){
            if(s1[i]>s2[i]){
                p=1;
                break;
            }
        }
        if(p) return false;
        return true;
    }
};
