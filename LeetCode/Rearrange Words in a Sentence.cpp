class Solution {
public:
    string arrangeWords(string s) {
        s.push_back(' ');
        vector<string>v[100010];
        string ss,sre;
        int mx=0;
        for(int i=0;i<(int)s.size();i++){
            if(s[i]==' '){
                int x=ss.size();
                mx=max(mx,x);
                v[x].push_back(ss);
                ss.clear();
            } 
            else ss.push_back(s[i]);
        }
        for(int i=1;i<=mx;i++){
            if(v[i].size()>0){
                for(int j=0;j<v[i].size();j++){
                    if(v[i][j][0]<='Z' and v[i][j][0]>='A') v[i][j][0]+=32;
                    sre+=v[i][j];
                    sre+=" ";
                }
            }
        }
        sre[0]-=32;
        sre.pop_back();
        return sre;
    }
};
