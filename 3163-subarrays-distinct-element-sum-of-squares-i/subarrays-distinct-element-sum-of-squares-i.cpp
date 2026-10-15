class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i; j<nums.size(); j++){
                unordered_set<int> st;
                for(int k=i; k<=j; k++){
                    st.insert(nums[k]);
                }
                sum+=st.size()*st.size();
            }
        }
        return sum;
    }
};