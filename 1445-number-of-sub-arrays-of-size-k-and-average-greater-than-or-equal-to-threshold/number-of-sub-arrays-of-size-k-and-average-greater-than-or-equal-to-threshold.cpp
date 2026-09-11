class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n= arr.size();
        int i=0;
        int j=k-1;
        int count=0;
        int sum=0;
        for(int t=0; t<k; t++){
            sum+=arr[t];
        }
        while(j<n){
            int avg=sum/k;
            if(avg>=threshold) count++;
            if(j+1<n) sum=sum+arr[++j]-arr[i++];
            else break;
        }
        return count;
    }
};