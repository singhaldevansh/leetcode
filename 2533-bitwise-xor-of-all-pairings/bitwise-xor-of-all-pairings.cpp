class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int xr1=0,xr2=0;
        int n1=nums1.size(),n2=nums2.size();
        for(int i=0; i<n1; i++){
            xr1^=nums1[i];
        }
        for(int i=0; i<n2; i++){
            xr2^=nums2[i];
        }
        n1%=2;
        n2%=2;
        if(n1!=0 && n2!=0) return xr1^xr2;
        if(n1==0 && n2!=0) return xr1;
        if(n1!=0 && n2==0) return xr2;
        return 0;
    }
};