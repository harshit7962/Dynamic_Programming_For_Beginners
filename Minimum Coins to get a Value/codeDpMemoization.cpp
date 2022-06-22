int minCoinsDP(int target, vector<int> val, vector<int> &dp) {
    if(target==0) return 0;
    if(target<0) return INT_MAX;
    
    if(dp[target]==INT_MAX) {
        int res=INT_MAX;
        for(int i=0;i<val.size();i++) {
            res = min(res, minCoinsDP(target-val[i], val, dp));
        }
        if(res!=INT_MAX) dp[target] = res+1;
    }
    
    return dp[target];
}
