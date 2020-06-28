class Solution {
public:
    double average(vector<int>& v) {
        int i,j;
        double sm=0.0;
        sort(v.begin(),v.end());
        for(i=1;i<v.size()-1;i++) sm+=(v[i]*1.0);
        return sm/(v.size()-2);
    }
};
