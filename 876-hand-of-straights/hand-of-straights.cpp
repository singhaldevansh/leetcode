class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;
        map<int,int>mp;
        for(int i: hand){
            mp[i]++;
        }
        for(auto &[key,value]: mp) {
            if(value==0) continue;
            int count=value;
            for(int i=0; i<groupSize; i++) {
                if(mp[key+i]<count) return false;
                mp[key+i]-=count;
            }
        }
        return true;
    }
};