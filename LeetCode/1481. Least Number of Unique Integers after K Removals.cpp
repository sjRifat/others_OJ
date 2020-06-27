class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& v, int k) {
        int n=v.size(),i,j,x,s=0,c=0;
        map<int,int>mp;
        vector<int>vv;
        for(i=0;i<n;i++){
            mp[v[i]]++;
        }
        for(auto it : mp){
            vv.push_back(it.second);
        }
        sort(vv.begin(),vv.end());
        int nn=vv.size();
        c=nn;
        for(i=0;i<nn;i++){
            if(k>=vv[i]){
                c--;
                k-=vv[i];
            }
            else break;
        }
        return c;
    }
};
