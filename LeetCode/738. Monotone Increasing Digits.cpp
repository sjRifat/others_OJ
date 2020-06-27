class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s;
        s=to_string(n);
        int i,j,l;
        for(i=s.size()-1;i>0;i--){
            if(s[i]<s[i-1]){
                s[i-1]--;
                for(j=i;j<s.size();j++) s[j]='9';
            }
        }
        if(s.front()=='0') s.erase(0,1);
        int x=stoi(s);
        return x;
    }
};
