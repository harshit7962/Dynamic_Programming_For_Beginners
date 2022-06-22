int LongestIncreasingSubsequence(vector<int> arr) {
    /**
    Here we maintain an array of size n to store the maximum length of subsequence possible till ith character...
    We use this array in progression to update all the elements...
    For example our array is [3,4,2,5,10,8]
    Then we initialize first index of our res array with 1 (as first element can only make a subsequence of size 1)
    Now, for ith element we check for maximum possible value in array before i-1 such thath element of arr at i is greater than element of that value...
    ex: 
    In same array till 2 our res array will be [1,2,1] now for element 5(indexed at 3) we traverse through original array and the max corresponding value in res array such that element in arr is smaller...
    In this case, we see that 5 can form subsequence with all 3,4 and 2... but the maximum sized subsequence will be 3, when it forms with 4...
    so, our res array will change to [1,2,1,3]... and similarly we fill all other elements
    */
    vector<int> res(arr.size());
    res[0]=1;
    for(int i=1;i<arr.size();i++) {
        int mx=0;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i] && res[j]>mx) mx = res[j];  
        }
        res[i] = mx+1;
    }
    
    /**
    We return the largest value in our res array
    */
    int ans=0;
    for(int i:res) ans=max(ans, i);
    
    return ans;
}
