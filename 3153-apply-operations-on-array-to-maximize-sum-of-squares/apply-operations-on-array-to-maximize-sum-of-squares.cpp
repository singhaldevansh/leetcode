class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            int power=1;
            while(nums[i]>0) {
                int n= nums[i]%2;
                nums[i]/=2;
                mp[power]+=n;
                power*=2;
            }
        }
        long long net=0;
        for(int i=0; i<k; i++){
            long long sum=0;
            for (auto &[key,value] : views::reverse(mp)){
                if(value>0){
                    sum+=key;
                    value--;
                }
            }
            net=(net+(sum*sum))%1000000007;   
        }
        return net;
    }
};