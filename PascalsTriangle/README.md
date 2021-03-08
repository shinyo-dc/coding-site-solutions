The problem:
===

Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

![Alt Text](https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif)

Example 1:
```
Input: rowIndex = 3
Output: [1,3,3,1]
```
Example 2:
```
Input: rowIndex = 0
Output: [1]
```
Example 3:
```
Input: rowIndex = 1
Output: [1,1]
 ```

Constraints:
- `0 <= rowIndex <= 33`

The solution:
===
Simple recursion with memoization to calculate the coressponding pascal's triangle value, then pushing it back to the `result` vector for the return value.
```
  0 1 2 3 4
0 1
1 1 1
2 1 2 1
3 1 3 3 1
4 1 4 6 4 1
The coresponding value of pascal[rows][cols] will be pascal[rows-1][cols-1] + pascal[rows-1][cols]
```

The implementation can be found on `solution.cpp`
