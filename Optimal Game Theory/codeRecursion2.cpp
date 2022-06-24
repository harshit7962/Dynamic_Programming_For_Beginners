int gameTheory2(vector<int> v, int i, int j) {
    if(j==i+1) return max(v[i], v[j]);
    
    return max(v[i]+min(gameTheory2(v, i+2, j), gameTheory2(v, i+1,j-1)), v[j]+min(gameTheory2(v,i+1,j-1), gameTheory2(v, i, j-2)));
}
