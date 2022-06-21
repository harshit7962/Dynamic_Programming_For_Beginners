//Here we are using the idea of recursive solution and to cut down on number of recursive calls we are maintaining a matrix to store the intermediate results
int lcsDP(string s1, string s2, int m, int n, vector<vector<int>> &dp) {
    if(m==0 || n==0) dp[m][n]=0;
    
    if(dp[m][n]==-1) {
        if(s1[m-1]==s2[n-1]) dp[m][n] = 1 + lcs(s1, s2, m-1, n-1);
        else dp[m][n] = max(lcs(s1, s2, m-1, n), lcs(s1,s2,m,n-1));
    }
    
    return dp[m][n];
}
