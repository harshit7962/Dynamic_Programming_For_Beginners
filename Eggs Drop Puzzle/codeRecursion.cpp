int eggsDrop(int flrs, int eggs) {
    if(flrs==1 || flrs==0 || eggs==1) return flrs;
    
    int res=INT_MAX;
    for(int i=1;i<=flrs;i++) {
        res = min(res, max(eggsDrop(i-1, eggs-1), eggsDrop(flrs-i, eggs)));
    }
    
    return res+1;
}
