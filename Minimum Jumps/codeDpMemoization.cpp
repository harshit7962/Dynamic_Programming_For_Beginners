int minJumpsDP(vector<int> v, int curr, vector<int> &dp){
    if(curr<=0) return 0;
    
    if(dp[curr]==INT_MAX) {
        int res=INT_MAX;
        for(int i=curr-1;i>=0;i--) {
            if(v[i]+i>=curr) res = min(res, minJumpsDP(v, i, dp));
        }
        if(res!=INT_MAX) res++;
        dp[curr] = res;
    }
    
    return dp[curr];
}
