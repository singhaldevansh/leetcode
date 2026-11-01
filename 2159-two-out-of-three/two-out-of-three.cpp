class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int> mp;
        unordered_set<int> st1(nums1.begin(),nums1.end());
        unordered_set<int> st2(nums2.begin(),nums2.end());
        unordered_set<int> st3(nums3.begin(),nums3.end());
        for(int x: st1) mp[x]++;
        for(int x: st2) mp[x]++;
        for(int x: st3) mp[x]++;
        vector<int>v;
        for(auto &[key,value]: mp){
            if(value>=2) v.push_back(key);
        }
        return v;
    }
};