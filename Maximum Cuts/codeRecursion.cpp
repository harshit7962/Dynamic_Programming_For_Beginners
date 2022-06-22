//Helper function to find maximum of three integers
int max(int a, int b, int c) {
    return max(a, max(b, c));
}

int maxCuts(int n, int a, int b, int c) {
    cout << n << " ";
    if(n==0) return 0;
    if(n<0) return -1;
    
    int res=max(maxCuts(n-a,a,b,c), maxCuts(n-b,a,b,c), maxCuts(n-c,a,b,c));
    
    if(res==-1) return -1;
    return res+1;
}
