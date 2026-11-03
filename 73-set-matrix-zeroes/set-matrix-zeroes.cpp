class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,unordered_set<int>>mp;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j]==0){
                    mp[0].insert(i);
                    mp[1].insert(j);
                }
            }
        }
        for(auto x: mp[0]){
            for(int j=0; j<matrix[0].size(); j++){
                matrix[x][j]=0;
            }
        }
        for(auto x: mp[1]){
            for(int i=0; i<matrix.size(); i++){
                matrix[i][x]=0;
            }
        }
    }
};