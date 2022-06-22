int minJumpsDP2(vector<int> v) {
    vector<int> dp(v.size()+1, INT_MAX);
    dp[v.size()-1]=0;
    
    for(int i=v.size()-2;i>=0;i--) {
        int res=INT_MAX;
        for(int j=1;j<=v[i] && i+j<v.size();j++){
            res=min(res, dp[i+j]);
        }
        if(res!=INT_MAX) dp[i]=res+1;
    }
    
    return dp[0];
}
