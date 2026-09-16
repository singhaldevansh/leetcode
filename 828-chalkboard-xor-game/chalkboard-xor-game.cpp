class Solution {
public:
    bool xorGame(vector<int>& nums) {
        int x=0;
        for(int i=0; i<nums.size(); i++) x^=nums[i];
        return (nums.size()%2==0 || x==0);
    }
};