# [Non-Attacking Black and White Knights](https://www.geeksforgeeks.org/problems/black-and-white-1587115620/1?_gl=1*fmkw5c*_up*MQ..*_gs*MQ..&gclid=Cj0KCQjw54nRBhDCARIsAMcY_SB_T2ACLvFQor9ZmwXMdGuZTAw5eEIZ8KybC1xAbhBro-j9LTtc0GsaAn5_EALw_wcB&gbraid=0AAAAAC9yBkBrwikzb7-tG2m7W4HkWOTsV)
## Medium
Given two integers n and m representing the dimensions of a chessboard, find the number of ways to place one black knight and one white knight on the chessboard such that they cannot attack each other.
Note:

The knights have to be placed on different squares. 
A knight can move two squares horizontally and one square vertically (L shaped), or two squares vertically and one square horizontally (L shaped). 
The knights attack each other if one can reach the other in one move.

Examples:
Input: n = 2, m = 2
Output: 12 
Explanation: There are 12 ways we can place a black and a white Knight on this chessboard such that they cannot attack each other.

Input: n = 2, m = 3
Output: 26
Explanation: There are 26 ways we can place a black and a white Knight on this chessboard such that they cannot attack each other.

Constraints:1 ≤ n ≤ 2001 ≤ m ≤ 225