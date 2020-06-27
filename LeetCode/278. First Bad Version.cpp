class Solution {
public:
    int firstBadVersion(int n) {
        int lo=1,hi=n;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(isBadVersion(mid)==true and isBadVersion(mid-1)==false) return mid;
            if(isBadVersion(mid)==true) hi=mid-1;
            else lo=mid+1;
        }
        return n+1;
    }
};
