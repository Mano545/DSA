# [Middle Pattern](https://www.geeksforgeeks.org/problems/middle-pattern/1)
## Easy
Given an odd length string s, return a list of strings by starting from the middle character of s and then repeatedly appending the next characters in circular order. Continue this process until all characters of the string have been included.
Each generated string should be considered as one pattern in the output list.
Examples :
Input: s = "RAT"
Output: ["A", "AT", "ATR"]
Explanation: The middle character of "RAT" is 'A'.
Starting from the middle and appending the next characters in circular order:
A
AT
ATR
Here, after reaching 'T', the traversal wraps around to the beginning of the string and continues with 'R' to complete the pattern sequence.
Input: s = "PROGRAM"Output: ["G", "GR", "GRA", "GRAM", "GRAMP", "GRAMPR", "GRAMPRO"]Explanation: The middle character of "PROGRAM" is 'G'.Starting from 'G', characters are appended one by one in circular order to form the sequence:GGRGRAGRAMGRAMPGRAMPRGRAMPROHere, after reaching 'M', the traversal wraps around to the beginning of the string and continues with 'P', 'R', and 'O' to complete the pattern sequence.

Constraints:1 ≤ |s| ≤ 500