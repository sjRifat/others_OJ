class Solution {
public:
    string reformat(string s) {
        int n=s.size();
        string s1,s2;
        int ch=0,dg=0,i;
        for(i=0;i<n;i++){
            if(s[i]>='0' and s[i]<='9'){
                dg++;
                s1.push_back(s[i]);
            }
            else{
                ch++;
                s2.push_back(s[i]);
            }
        }
        if(abs(dg-ch)>1) return "";
        if(dg>ch){
            string ss;
            for(i=0;i<(int)s1.size()-1;i++){
                ss.push_back(s1[i]);
                ss.push_back(s2[i]);
            }
            ss.push_back(s1.back());
            return ss;
        }
        else if(dg==ch){
            string ss;
            for(i=0;i<(int)s1.size();i++){
                ss.push_back(s1[i]);
                ss.push_back(s2[i]);
            }
            return ss;
        }
        else{
            string ss;
            for(i=0;i<(int)s1.size();i++){
                ss.push_back(s2[i]);
                ss.push_back(s1[i]);
            }
            ss.push_back(s2.back());
            return ss;
        }
    }
};
