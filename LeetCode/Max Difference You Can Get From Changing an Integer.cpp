class Solution {
public:
    int maxDiff(int n) {
        string s1,s2;
        int i,p=0,pp=0;
        char c1,c2;
        s1=to_string(n);
        s2=to_string(n);
        for(i=0;i<(int)s1.size();i++){
            if(s1[i]!='9'){
                c1=s1[i];
                p=1;
                break;
            }
        }
        if(p){
            for(i=0;i<(int)s1.size();i++){
                if(s1[i]==c1){
                    s1[i]='9';
                }
            }
        }
        if(s2[0]!='1'){
            c2=s2[0];
            for(i=0;i<(int)s2.size();i++){
                if(s2[i]==c2){
                    s2[i]='1';
                }
            }
        } 
        else{
            for(i=1;i<(int)s2.size();i++){
                if(s2[i]>'1'){
                    c2=s2[i];
                    pp=1;
                    break;
                }
            }
            if(pp){
                for(i=0;i<(int)s2.size();i++){
                    if(s2[i]==c2){
                        s2[i]='0';
                    }
                }
            }
            
        }
        
        int x,y;
        x=stoi(s1);
        y=stoi(s2);
        return x-y;
    }
};
