# Edit Distance
Given two strings, we need to return minimum number of steps to convert s1 to s2...
In 1 step, we can do anyone of the following operations:
1) Delete a character from s1
2) Add a character to s1
3) Replace a given character with another character in s1...


**Example1:**<br>
s1 = "CAT", s2="CUT"<br>
Here we can replace 'A' by 'U' and our string s1 becomes s2, so our answer would be **1**...

**Example2:**<br>
s1="CATS", s2="CUT"
Here we need a minimum of **2** operations... replace 'A' with 'U' and delete 's'

## Approach
This is in a way an extension to longest common subsequence  problem... The idea here is that we need to keep our longest common subsequence intact...
If any non-matching character is found, we will have three operations then - 
- Replacing the character in s1 by same character of s2
- Adding the same character in s1
- Deleting the character from s1...
We keep return the minimum editing we need in the rest of leftover strings...
