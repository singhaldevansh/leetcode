class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<double>st;
        sort(nums.begin(),nums.end());
        int i=0, j=nums.size()-1;
        while(i<j){
            st.insert((nums[i]+nums[j])/2.0);
            i++;j--;
        }
        return st.size();
    }
};