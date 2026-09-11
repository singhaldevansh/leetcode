class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        map<int,int>mp;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix.size(); j++){
                mp[matrix[i][j]]++;
            }
        }
        vector<int>v;
        for(auto &[key,value]: mp){
            while(value>0){
                v.push_back(key);
                value--;
            }
        }
        return v[k-1];
    }
};