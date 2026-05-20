# [Product Pair](https://www.geeksforgeeks.org/problems/equal-to-product3836/1?_gl=1*osrpj8*_up*MQ..*_gs*MQ..&gclid=CjwKCAjwt7XQBhBkEiwAtStpp9n_WHZp1pgfPyEiXMT2cR9rPghVuq7c6xXIgHEQ3P3y8v4qqV0LeRoCO9wQAvD_BwE&gbraid=0AAAAAC9yBkA8ooDy0ZgDtdre3i_xqWpAN)
## Medium
Given an integer array arr[] and an integer target, determine whether there exists a pair of elements in the array whose product is equal to target.
Return true if such a pair exists; otherwise, return false.
Examples:
Input: arr[] = [10, 20, 9, 40], target = 400
Output: true
Explanation: As 10 * 40 = 400, the answer is true.

Input: arr[] = [-10, 20, 9, -40], target = 30
Output: false
Explanation: No pair exists with product 30.
Input: arr[] = [-10, 0, 9, -40], target = 0
Output: true
Explanation: As -10 * 0 = 0, the answer is true.
Constraints:2 ≤ arr.size ≤ 105-108 ≤ arr[i] ≤ 108-1018 ≤ target ≤ 1018