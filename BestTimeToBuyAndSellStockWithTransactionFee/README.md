The problem
===

You are given an array prices where `prices[i]` is the price of a given stock on the `ith` day, and an integer `fee` representing a transaction fee.

Find the maximum profit you can achieve. You may complete as many transactions as you like, but you need to pay the transaction fee for each transaction.

Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

 

Example 1:
```
Input: prices = [1,3,2,8,4,9], fee = 2
Output: 8
Explanation: The maximum profit can be achieved by:
- Buying at prices[0] = 1
- Selling at prices[3] = 8
- Buying at prices[4] = 4
- Selling at prices[5] = 9
The total profit is ((8 - 1) - 2) + ((9 - 4) - 2) = 8.
```
Example 2:
```
Input: prices = [1,3,7,5,10,3], fee = 3
Output: 6
 ```

Constraints:
```
1 < prices.length <= 5 * 10^4
0 < prices[i], fee < 5 * 10^4
```

The solution
===

Based on https://www.youtube.com/watch?v=oVKaUeQsQJE explanation:

`dp[i][0]`: on day `ith` i dont have any stock

`dp[i][1]`: on day `ith` i have a stock

Case 1: I have a stock, maximizing these two values:

1: Im buying a stock today: `dp[i][1] = dp[i-1][0] - prices[i] - fee`

2: Im not buying any stock, keeping the stock i bought before: `dp[i][1] = dp[i-1][1]`

Case 2: I don't have any stock, maximizing these two values:

1: Im selling a stock: `dp[i][0] = dp[i-1][1] + prices[i]`

2: I dont have any stock before, keep the day goes on: `dp[i][0] = dp[i-1][0]`

The implementation can be found on `solution.cpp`

Note: using `int dp[len][2]` instead of `vector<vector<int>>` to get accepted, I tried.
