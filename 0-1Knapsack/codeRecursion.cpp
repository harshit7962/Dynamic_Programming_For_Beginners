int knapsack(vector<int> val, vector<int> wgt, int w, int n) {
    if(w==0 || n==-1) return 0;
    
    if(w>=wgt[n]) return max(knapsack(val, wgt, w, n-1), val[n]+knapsack(val, wgt, w-wgt[n], n-1));
    else return (knapsack(val, wgt, w, n-1));
}

/**
Time Complexity: O(2^n) n=number of elements in our sack
*/
