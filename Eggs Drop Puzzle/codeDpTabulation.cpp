int  eggsDropDP(int flrs, int eggs) {
    vector<vector<int>> dp(flrs+1, vector<int>(eggs+1));
    
    for(int i=0;i<=flrs;i++) {
        dp[i][0] = 0;
        dp[i][1] = i;
    }
    
    for(int i=0;i<=eggs;i++) {
        dp[0][i] = 0;
        dp[1][i] = 1;
    }
    
    for(int i=2;i<=flrs;i++) {
        for(int j=2;j<=eggs;j++) {
            int res = INT_MAX;
            for(int x=1;x<=i;x++) {
                res = min(res, max(dp[x-1][j-1], dp[i-x][j]));
            }
            dp[i][j] = res+1;
        }
    }
    
    return dp[flrs][eggs];
}
