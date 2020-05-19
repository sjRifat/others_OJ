class Solution {
public:
    int numTeams(vector<int>& ar) {
        int n=ar.size(),i,j,sm=0;
        for(i=1;i<n-1;i++){
            int c1=0;
            for(j=0;j<i;j++){
                if(ar[j]<ar[i]) c1++;
            }
            for(j=i+1;j<n;j++){
                if(ar[j]>ar[i]) sm+=c1;
            }
            c1=0;
            for(j=0;j<i;j++){
                if(ar[j]>ar[i]) c1++;
            }
            for(j=i+1;j<n;j++){
                if(ar[j]<ar[i]) sm+=c1;
            }
        }
        return sm;
    }
};
