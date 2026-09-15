class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j=0;
        int sum=0;
        int mn=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum<target){
                continue;
            }
            else{
                while(sum-nums[j]>=target){
                    sum-=nums[j++];
                }
                int window=i-j+1;
                mn=min(window,mn);
            }
        }
        if(mn!=INT_MAX) return mn;
        return 0;
    }
};