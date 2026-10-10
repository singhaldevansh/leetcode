class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(int i: magazine){
            mp[i]++;
        }
        for(int i: ransomNote){
            if(mp.find(i)==mp.end()) return false;
            else{
                mp[i]--;
                if(mp[i]<0) return false;
            }
        }
        return true;
    }
};