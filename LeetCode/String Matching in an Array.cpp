class Solution {
public:
    vector<string> stringMatching(vector<string>& vs) {
        int n=vs.size();
        vector<string>sub;
        int i,j,k;
        for(i=0;i<n;i++){
            int p=0;
            for(j=0;j<n;j++){
                if(i==j) continue;
                if(vs[j].size()<vs[i].size()) continue;
                for(k=0;k<=(int)vs[j].size()-(int)vs[i].size();k++){
                    string ss;
                    ss.assign(vs[j],k,(int)vs[i].size());
                    if(ss==vs[i]){
                        sub.push_back(ss);
                        p=1;
                        break;
                    } 
                }
                if(p) break;
            }
        }
        return sub;
    }
};
