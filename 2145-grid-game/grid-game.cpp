class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long top=0, bottom=0;
        long long sum=LLONG_MAX;
        for(int i=0; i<grid[0].size(); i++){
            top+=grid[0][i];
        }
        for(int i=0; i<grid[0].size(); i++){
            top-=grid[0][i];
            sum=min(sum,max(top,bottom));
            bottom+=grid[1][i];
        }
        return sum;
    }
};