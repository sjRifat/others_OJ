class Solution {
public:
    int numSubarraysWithSum(vector<int>& v, int s) {
        int n=v.size(),i,j,id=0,p=0,one=0;
        int ar[30003]={0};
        for(i=0;i<n;i++) if(v[i]) break;
        int ss=((i+1)*i)/2;
        for(i=0;i<n;i++){
            if(v[i]==1) one++;
            if(v[i]==1 and one==s) id=i,p=1;
            int c=0;
            int x=i;
            if(v[i]==1 and v[i+1]==0){
                while(v[i+1]==0 and i+1<n){
                    i++;
                    c++;
                }
            }
            ss+=((c*(c+1))/2);
            ar[x]=c;
        }
        if(s==0) return ss;
        if(p==0) return 0;
        int lo=0,hi=id;
        int c=0;
        while(v[lo]!=1){
            lo++;
            c++;
        }
        if(hi+1==n) return c+1;
        int sm=0;
        while(1){
            if(c) sm+=((ar[hi]+1)*c);
            sm+=(ar[hi]+1);
            if(hi+ar[hi]+1==n) break;
            lo++;
            c=0;
            while(v[lo]!=1){
                lo++;
                c++;
            }
            hi++;
            while(v[hi]!=1){
                hi++;
            }
        }
        return sm;
    }
};
