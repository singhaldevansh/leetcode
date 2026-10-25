class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& grid){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()) return 0;
        if(grid[i][j]==1) return 1;
        grid[i][j]=1;
        int a=solve(i-1,j,grid);
        int b=solve(i+1,j,grid);
        int c=solve(i,j-1,grid);
        int d=solve(i,j+1,grid);
        return a && b && c && d;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]==0 && solve(i,j,grid)) count++;
            }
        }
        return count;
    }
};