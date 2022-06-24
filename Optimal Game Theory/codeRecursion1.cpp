int gameTheory1(vector<int> v, int i, int j, int sum) {
    if(j==i+1) return max(v[i], v[j]);
    
    return max(sum-gameTheory1(v, i+1, j, sum-v[i]), sum-gameTheory1(v, i, j-1, sum-v[j]));
}
