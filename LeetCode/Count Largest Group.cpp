class Solution {
public:
    int countLargestGroup(int n) {
        int i,j,sm=0,mx=0;
        vector<int>v[10010];
        int cnt[10010]={0};
        for(i=1;i<=n;i++){
            int x=i;
            int s=0;
            while(x){
                s+=(x%10);
                x/=10;
            }
            cnt[s]++;
            mx=max(mx,cnt[s]);
        }
        for(i=0;i<10010;i++){
            if(cnt[i]==mx) sm++;
        }
        return sm;
    }
};
