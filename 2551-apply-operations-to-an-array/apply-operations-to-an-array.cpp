class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i=0,j=1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                nums[i]*=2;
                nums[j]=0;
            }
            i++;j++;
        }
        j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
        }
        while(j<nums.size()){
            nums[j++]=0;
        }
        return nums;
    }
};