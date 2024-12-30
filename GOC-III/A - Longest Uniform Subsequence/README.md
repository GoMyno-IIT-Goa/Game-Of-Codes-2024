# A - Longest Uniform Subsequence

The solution revolves around counting the frequency of each character in the string $S$. Let's say we need the longest subsequence containing only the letter $a$. For this, we can just keep the letter $a$ in the string and remove all other characters. The length of this resulting subsequence would be the total number of $a$'s in the string.

Hence, we just count the frequency of every character in the string. Once the frequency array is populated, iterate over it to find the maximum frequency value. This value is the required answer for the test case.