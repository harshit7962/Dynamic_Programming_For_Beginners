int minCoins(int target, vector<int> val, int coins=0) {
    if(target==0) return coins;
    if(target<0) return INT_MAX;
    
    int res=INT_MAX;
    
    for(int i=0;i<val.size();i++){
        res = min(res, minCoins(target-val[i], val, coins+1));
    }
    
    return res;
}
