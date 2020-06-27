class Solution {
public:
    int xorOperation(int n, int x) {
        int i,j,sm=0;
        for(i=0;i<n;i++){
            int a=i*2+x;
            sm^=a;
        }
        return sm;
    }
};
