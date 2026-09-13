class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        int value=0;
        for(int row=-(n-1); row<=n-1; row++){
            for(int col=-(n-1); col<=n-1; col++){
                int count=0;
                for(int i=0; i<n; i++){
                    for(int j=0; j<n; j++){
                        int x=i+row;
                        int y=j+col;
                        if(x>=0 && x<n && y>=0 && y<n && img1[i][j] && img2[x][y]==1) count++;
                    }
                }
                value=max(value,count);
            }
        }
        return value;
    }
};