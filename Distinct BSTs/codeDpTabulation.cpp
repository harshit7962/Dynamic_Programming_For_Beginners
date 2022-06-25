int countTreesDP(int n) {
    vector<int> dp(n+1, 1);
    
    for(int i=1;i<=n;i++){
        int res=0;
        for(int x=1;x<=i;x++) {
            res+=dp[x-1]*dp[i-x];
        }
        dp[i] = res;
    }
    
    return dp[n];
}
