int knapsackDP(vector<int> val, vector<int> wgt, int w) {
    int n=val.size();
    vector<vector<int>> dp(n+1, w+1, 0);
    
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=w;j++) {
            if(j>=wgt[i-1]) {
                dp[i][j] = max(dp[i-1][j], val[i-1]+dp[i-1][j-wgt[i-1]])
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
    return dp[n][w];
}

/**
Time Complexity: O(n*w)
*/
