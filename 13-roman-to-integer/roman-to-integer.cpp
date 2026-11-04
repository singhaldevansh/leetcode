class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp;
        mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int i=0,value=0;
        while(i<s.size()-1){
            if(mp[s[i]]<mp[s[i+1]]){
                value+=mp[s[i+1]]-mp[s[i]];
                i+=2;
            }
            else{
                value+=mp[s[i]];
                i++;
            }
        }
        if(i<s.size()) value+=mp[s[i]];
        return value;
    }
};