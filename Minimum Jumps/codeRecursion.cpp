int minJumps(vector<int> v, int curr){
    if(curr<=0) return 0;
    
    int res=INT_MAX;
    for(int i=curr-1;i>=0;i--){
        if(v[i]+i>=curr) {
            res=min(res, minJumps(v, i));
        }
    }
    if(res!=INT_MAX) res++;
    
    return res;
}
