# Longest Common Subsequence
A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.
A common subsequence of two strings is a subsequence that is common to both strings...


**Example 1:** <br>
s1 = "abcde", s2 = "ace" <br>
The longest common subsequence here is "ace".

**Example 2:** <br>
s1 = "abc", s2 = "def" <br>
Here we dont have any common subsequence.

# Variations of LCS:
1) **Diff Utility:** Used in version controls where we want to find the what is newly added and what is removed in our new update.
2) **Minimum Insertions and Deletions to convert s1 into s2:** Again the idea here is to find the longest common subsequence, and for deletion we will have to delete lcs-length  of s1 characters and similarly for adding we will have to add lcs-lenght of s2 characters. 
3) **Shortest Common SuperSequence:** Here we need to find the shorted string which has s1 and s2 as its subsequence. The idea here again is to find the lcs and append non-common characters in middle of this lcs using s1 and s2.
4) **Longest Palindromic Subsequence:** Given a string, we need to find the longest palindromic subsequence in it. The idea here is to find lcs of given string with reverse of given string.
5) **Space optimized DP solution using LCS:** Here we just need to find the length of longest common subsequence, but we need to improve on the space complexity,which right now is O(mXn). The idea here is that the we need  only the row above current row for comuting in our tabulation method.
6) **Printing LCS:** Till now, we were only printing the length of longest common subsequence, but to print the LCS, we need to traverse the 2-d array in from bottom right corner and then using the rules append the matching characters to our LCS string.
