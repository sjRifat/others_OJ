class Solution {
public:
    vector<string> buildArray(vector<int>& v, int n) {
        vector<int>::iterator it;
        int l=v.size(),i;
        vector<string>vs;
        for(i=0;i<v.size();i++){
            if(i+1==v[i]) vs.push_back("Push");
            else{
                v.insert(v.begin()+i,i+1);
                vs.push_back("Push");
                vs.push_back("Pop");
            }
        }
        return vs;
    }
};
