class Solution {
public:
    int numRescueBoats(vector<int>& v, int l) {
        int n=v.size(),i,j;
        sort(v.begin(),v.end());
        int lo=0,hi=n-1,c=0;
        while(lo<=hi){
            if(v[lo]+v[hi]<=l){
                c++;
                lo++;
                hi--;
            }
            else{
                c++;
                hi--;
            }
        }
        return c;
    }
};
