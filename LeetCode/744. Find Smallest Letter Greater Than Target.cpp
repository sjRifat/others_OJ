class Solution {
public:
    char nextGreatestLetter(vector<char>& v, char c) {
        if(c>=v.back()) return v.front();
        auto it=upper_bound(v.begin(),v.end(),c);
        return (*it);
    }
};
