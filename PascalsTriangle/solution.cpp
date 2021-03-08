class Solution {
public:
    int pascal(int rows, int cols, vector<vector<int>>& memo) {
        if(cols == 0)
            return 1;
        if (rows == cols)
            return 1;
        if (memo[rows][cols] != -1)
            return memo[rows][cols];
        memo[rows][cols] = pascal(rows-1, cols-1, memo) + pascal(rows-1, cols, memo);
        return memo[rows][cols];
    }
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> memo (rowIndex+1, vector<int>(rowIndex+1, -1));
        vector<int> result;
        for (int i = 0; i <= rowIndex; i++)
            result.push_back(pascal(rowIndex, i, memo));
        return result;
    }
};
