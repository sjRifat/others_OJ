class Solution {
public:
    int minSteps(int n) {
        int ar[1010],i,j;
        ar[1]=0;
        ar[2]=2;
        for(i=3;i<=n;i++){
            int p=0;
            for(j=i/2;j>1;j--){
                if(i%j==0){
                    p=1;
                    ar[i]=ar[j]+i/j;
                    break;
                }
            }
            if(!p) ar[i]=i;
        }
        return ar[n];
    }
};
