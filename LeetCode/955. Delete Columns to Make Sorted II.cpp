class Solution {
public:
    int minDeletionSize(vector<string>& v) {
        int n=v.size();
        int m=v[0].size();
        int i,j,c=0;
        vector<string>s(n);
        for(i=0;i<m;i++){
            for(j=0;j<n;j++) s[j].push_back(v[j][i]);
            int p=0;
            for(j=0;j<n-1;j++){
                if(s[j]>s[j+1]){
                    p=1;
                    break;
                }
            }
            if(p){
                c++;
                for(j=0;j<n;j++) s[j].pop_back();
            } 
        }
        return c;
    }
};
