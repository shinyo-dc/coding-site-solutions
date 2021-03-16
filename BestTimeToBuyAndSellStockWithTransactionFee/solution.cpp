class Solution {
public:
    /*
        dp[i][0]: on day ith i dont have any stock
        dp[i][1]: on day ith i have a stock
        
        Case 1: I have a stock, maximizing these two values:
            1: Im buying a stock today: dp[i][1] = dp[i-1][0] - prices[i] - fee;
            2: Im not buying any stock, keeping the stock i bought before: dp[i][1] = dp[i-1][1]
        Case 2: I don't have any stock, maximizing these two values:
            1: Im selling a stock: dp[i][0] = dp[i-1][1] + prices[i]
            2: I dont have any stock before, keep the day goes on: dp[i][0] = dp[i-1][0]
        
    */
    int maxProfit(vector<int>& prices, int fee) {
        int len = prices.size();
        if (len <= 1)
            return 0;
        int dp[len][2];
        dp[0][0] = 0;                   // if first day i dont have a stock, my profit is 0
        dp[0][1] = -prices[0] - fee;    // if first day im buying a stock, my profit is -prices - fee (buying it initially)
        for (int i = 1; i < len; i++) {
            dp[i][0] = max(dp[i-1][1] + prices[i], dp[i-1][0]);
            dp[i][1] = max(dp[i-1][0] - prices[i] - fee, dp[i-1][1]);
        }
        return dp[len-1][0];            // at the end i dont want to hold any more stock
    }
};
