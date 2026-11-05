class Solution {
public:
    int search(vector<int>& arr2, int lower, int higher) {
        int low=0, high=arr2.size()-1;
        while(low<=high) {
            int mid=low+(high-low)/2;
            if(lower<=arr2[mid] && arr2[mid]<=higher) return mid;
            else if(arr2[mid]<lower) low=mid+1;
            else high = mid-1;
        }
        return -1;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        sort(arr2.begin(),arr2.end());
        for(int i=0; i<arr1.size(); i++){
            int lower=-d+arr1[i];
            int higher=d+arr1[i];
            int value=search(arr2, lower, higher);
            if(value==-1) count++;
        }
        return count;
    }
};