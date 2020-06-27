class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int c1=0,c2=0,x=0,y=0,i,j;
        for(i=0;i<s1.size();i++){
            if(s1[i]=='x') x++;
            else y++;
            if(s2[i]=='x') x++;
            else y++;
        }
        if(x&1) return -1;
        string s3,s4;
        for(i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                s3.push_back(s1[i]);
                s4.push_back(s2[i]);
            }
        }
        for(i=0;i<s3.size();i++){
            if(s3[i]=='x' and s4[i]=='y') c1++;
            else c2++;
        }
        x=0,y=0;
        if(c1&1) y++;
        x+=c1/2;
        if(c2&1) y++;
        x+=c2/2;
        x+=y;
        return x;
    }
};
