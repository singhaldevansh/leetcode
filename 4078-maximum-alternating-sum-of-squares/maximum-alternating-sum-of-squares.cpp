class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]<0) nums[i]*=-1;
        }
        sort(nums.rbegin(),nums.rend());
        long long sum=0;
        for(int i=0; i<(n+1)/2; i++){
            sum+=1LL*nums[i]*nums[i];
        }
        for(int i=(n+1)/2; i<n; i++){
            sum-=nums[i]*nums[i];
        }
        return sum;
    }
};