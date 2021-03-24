The problem
===

Given two arrays `A` and `B` of equal size, the advantage of `A` with respect to `B` is the number of indices `i` for which `A[i]` > `B[i]`.

Return any permutation of `A` that maximizes its advantage with respect to `B`.

 

Example 1:
```
Input: A = [2,7,11,15], B = [1,10,4,11]
Output: [2,11,7,15]
```
Example 2:
```
Input: A = [12,24,8,32], B = [13,25,32,11]
Output: [24,32,8,12]
 ```

Note:
```
1 <= A.length = B.length <= 10000
0 <= A[i] <= 10^9
0 <= B[i] <= 10^9
```

The solution
===
Based on https://dev.to/seanpgallivan/solution-advantage-shuffle-p39, explained by me xD:
Select the largest possible value in `A` that is larger than `B[currIndex]` then remove it from `A`. This can be ultilized by sorting the `A` array beforehand then compare the last element in `A` with the largest number in `B`. To do so we can sort the `B`'s indices array by `B`'s value (descending order) and use that indices array to be a bridge between getting the largest value in `B` and putting the `A`'s value to the correct index.

The implementation can be found at `solution.cpp`
