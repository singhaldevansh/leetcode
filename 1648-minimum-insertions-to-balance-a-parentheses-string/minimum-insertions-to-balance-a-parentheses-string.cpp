class Solution {
public:
    int minInsertions(string s) {
        int open=0;
        int insert=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(') open++;
            else{
                if(i<s.size()-1 && s[i]==')' && s[i+1]==')') i++;
                else insert++;
                if(open>0) open--;
                else insert++;
            }
        }
        return open*2+insert;
    }
};