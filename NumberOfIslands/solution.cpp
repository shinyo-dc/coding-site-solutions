class Solution {
public:
    void marking(vector<vector<char>>& grid, int row, int col) {
        if (row < 0 || col < 0 || row == grid.size() || col == grid[0].size() || grid[row][col] == '0')
            return;
        grid[row][col] = '0';
        marking(grid, row-1, col);
        marking(grid, row, col-1);
        marking(grid, row+1, col);
        marking(grid, row, col+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++)
                if(grid[i][j] == '1') {
                    marking(grid, i, j);
                    count += 1;
                }
        }
        return count;
    }
};
