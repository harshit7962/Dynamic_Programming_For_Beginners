int gameTheoryDP(vector<int> v) {
    int n=v.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    
    for(int i=0;i<n;i++) {
        dp[i][i+1] = max(v[i], v[i+1]);
    }
    
    for(int gap=3;gap<n;gap=gap+2) {
        for(int i=0;i+gap<n;i++) {
            int j = i+gap;
            dp[i][j] = max(v[i]+min(dp[i+2][j], dp[i+1][j-1]), v[j]+min(dp[i+1][j-1], dp[i][j-2]));
        }
    }
    
    return dp[0][n-1];
}
