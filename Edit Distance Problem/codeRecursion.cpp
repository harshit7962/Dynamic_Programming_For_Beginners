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
*/
