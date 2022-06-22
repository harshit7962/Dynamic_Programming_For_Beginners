/**
The idea here is to store the smallest possible value of ith subsequence...
Unlike DP solution where we were storing the longest value with ith index, here we use the idea of sorting and binary searching...
*/
int findCeil(vector<int> arr, int k) {
    int low=0, high = arr.size()-1, res=0;
    while(low<=high) {
        int mid = low+(high-low)/2;
        if(arr[mid]>=k) {
            res = mid;
            high = mid-1;
        } else low = mid+1;
    }
    
    return res;
}

int LongestIncreasingSubsequence(vector<int> arr) {
    vector<int> res;
    res.push_back(arr[0]);
    for(int i=1;i<arr.size();i++) {
        if(arr[i]>res[res.size()-1]) res.push_back(arr[i]);
        else {
            int n = findCeil(res, arr[i]);
            res[n] = arr[i];
        }
    }
    
    return res.size();
}
