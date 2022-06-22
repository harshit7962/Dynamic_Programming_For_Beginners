int max(int a, int b, int c) {
    return max(a, max(b, c));
}

//Here we have initialized our dp with all values to -2
int maxCutsDP(int n, int a, int b, int c, vector<int> &dp) {
    cout << n << " ";
    if(n<0) return -1;
    if(n==0) return 0;

    if(dp[n]==-2) {
        int res = max(maxCutsDP(n-a, a, b, c, dp), maxCutsDP(n-b, a, b, c, dp), maxCutsDP(n-c,a,b,c, dp));
        if(res!=-1) dp[n]=res+1;
        else dp[n]=-1;
    }
    return dp[n];
}
