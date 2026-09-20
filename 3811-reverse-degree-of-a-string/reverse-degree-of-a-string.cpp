class Solution {
public:
    int reverseDegree(string s) {
        int value=0;
        for(int i=0; i<s.size(); i++){
            value+=abs(26-(s[i]-'a'))*(i+1);
        }
        return value;
    }
};