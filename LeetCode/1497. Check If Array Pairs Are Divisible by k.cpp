class Solution {
public:
    bool canArrange(vector<int>& v, int k) {
        int i,j,x,n=v.size();
        for(i=0;i<n;i++){
            x=v[i];
            x%=k;
            if(x<0) x=k+x;
            v[i]=x;
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        if(v.front()==0) return true;
        while(v.back()==0) v.pop_back();
        if(v.size()%2) return false;
        n=v.size();
        for(i=0;i<v.size()/2;i++){
            if((v[i]+v[n-i-1])%k!=0) return false;
        }
        return true;
    }
};
