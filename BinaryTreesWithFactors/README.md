The problem
===

Given an array of unique integers, `arr`, where each integer `arr[i]` is strictly greater than 1.

We make a binary tree using these integers, and each number may be used for any number of times. Each non-leaf node's value should be equal to the product of the values of its children.

Return the number of binary trees we can make. The answer may be too large so return the answer modulo `10^9 + 7`.

 

Example 1:
```
Input: arr = [2,4]
Output: 3
Explanation: We can make these trees: [2], [4], [4, 2, 2]
```
Example 2:
```
Input: arr = [2,4,5,10]
Output: 7
Explanation: We can make these trees: [2], [4], [5], [10], [4, 2, 2], [10, 2, 5], [10, 5, 2].
```
 

Constraints:
```
1 <= arr.length <= 1000
2 <= arr[i] <= 109
```

The solution:
Based on leetcode's solution and https://www.youtube.com/watch?v=uKNYf170n3s

The largest value v used must be the root node in the tree. Say `dp(v)` is the number of ways to make a tree with root node `v`.

If the root node of the tree (with value `v`) has children with values `x` and `y` (and `x * y == v`), then there are `dp(x) * dp(y)` ways to make this tree.

The total number of ways to make the trees is the total value of the dp array we made.

The implementation can be found on `solution.cpp`
