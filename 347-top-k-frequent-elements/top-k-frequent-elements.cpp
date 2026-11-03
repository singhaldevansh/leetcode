class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int x: nums) mp[x]++;
        vector<pair<int,int>>v;
        for(auto &[key,value]: mp) v.push_back({value,key});
        sort(v.rbegin(),v.rend());
        vector<int> freq;
        for(int i=0; i<k; i++) freq.push_back(v[i].second);
        return freq;
    }
};