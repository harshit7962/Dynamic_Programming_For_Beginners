//Helper Function to find minimum of three given values
int min(int a, int b, int c) {
    return min(a, min(b, c));
}

int editDistance(string s1, string s2, int m, int n) {
    /**
    These are our base cases...
    If string s1 is empty, then we need to add n characters in s1 to make it equal to s2... Those n characters are characters in s2
    If string s2 is empty, then we need to delete all the characters in s1 to make it equal to s2...
    */
    if(m==0) return n;
    if(n==0) return m;
    
    /**
    Similar to LCS problem, we are traversing strings in reverse direction...
    We dont need to perform any of the operations if the characters at last indices are matching...
    If the characters do not match we have 3 of the operations to perform and we return the minimum of them...
    */
    if(s1[m-1]==s2[n-1]) return editDistance(s1, s2, m-1, n-1);
    else {
        return 1+min(
            editDistance(s1, s2, m-1, n-1),
            editDistance(s1, s2, m, n-1),
            editDistance(s1, s2, m-1, n)
        );
    }
}

/**
1) editDistance(s1, s2, m-1, n-1) is corresponding to replacing operation....
Imagine the strings are "CATS" and "CUTE", and m=4, n=4... 
Now if we replace S with E, then we are making the string s1 as "CATE" and hence we can move to m=3 and n=3 as our remaining strings would be CAT and CUT... 
*/

/**
2) editDistance(s1, s2, m, n-1) is identical to adding operation...
Imagine the srings are "CAT" and "CUTS", and m=3 and n=4...
Now if we add an S, then we are making the string s1 as "CATS" and now m becomes 4... 
But we also need to  remove S from both the strings as they become identical in next operation and hence we decrease count of m to 3 and n to 3...
So we see that m stays m and n becomes n-1 at end...
*/

/**
3) editDistance(s1, s2, m-1, n) is identical to delete operation...
It is simply reducing m to m-1 while keeping n intact...
*/
