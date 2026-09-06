class Solution {
public:
    int n,m;
    int solve(string &s, string &t, int i, int j, vector<vector<int>> &dp){
        if(j==m) return 1;
        if(i==n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]){
            int n1=solve(s,t,i+1,j+1,dp);
            int n2=solve(s,t,i+1,j,dp);
            return dp[i][j]=n1+n2;
        }
        else return dp[i][j]=solve(s,t,i+1,j,dp);
    }
    int numDistinct(string s, string t) {
        n=s.size();
        m=t.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return solve(s,t,0,0,dp);
    }
};