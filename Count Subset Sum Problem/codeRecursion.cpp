int subsetSum(vector<int> v, int sum, int n) {
    if(n==0) {
        return (sum==0)?1:0;
    }
    
    return subsetSum(v, sum, n-1) + subsetSum(v, sum-v[n-1], n-1);
}
