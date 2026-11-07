class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>xr(arr.size());
        xr[0]=arr[0];
        for(int i=1; i<arr.size(); i++){
            xr[i]=xr[i-1]^arr[i];
        }
        vector<int>answer(queries.size());
        for(int i=0; i<queries.size(); i++){
            int left=queries[i][0];
            int right=queries[i][1];
            answer[i]=xr[left]^xr[right]^arr[left];
        }
        return answer;
    }
};