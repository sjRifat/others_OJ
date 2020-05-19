class Solution {
public:
    int findTheDistanceValue(vector<int>& v1, vector<int>& v2, int d) {
        int cnt=0;
        for(int i=0;i<v1.size();i++){
            int p=0;
            for(int j=0;j<v2.size();j++){
                if(abs(v1[i]-v2[j])<=d){
                    p=1;
                    break;
                }
            }
            if(!p) cnt++;
        }
        return cnt;
    }
};
