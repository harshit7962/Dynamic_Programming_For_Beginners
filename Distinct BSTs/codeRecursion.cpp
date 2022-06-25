int countTrees(int n) {
    if(n==0 || n==1) return 1;
    
    int res=0;
    for(int i=1;i<=n;i++) {
        res+=(countTrees(i-1)*countTrees(n-i));
    }
    
    return res;
}
