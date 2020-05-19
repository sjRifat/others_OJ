class Solution {
public:
    int countTriplets(vector<int>& v) {
        int i,cnt=0,j,k;
        for(i=1;i<(int)v.size();i++){
            int x=0,y=0;
            map<int,int>mp;
            for(j=0;j<i;j++){
                x=0;
                for(k=j;k<i;k++){
                   x^=v[k];
                }
                mp[x]++;
            }
            for(j=(int)v.size()-1;j>=i;j--){
                y=0;
                for(k=j;k>=i;k--){
                   y^=v[k];
                }
                if(mp[y]>0) cnt+=mp[y];
            }
        }
        return cnt;
    }
};
