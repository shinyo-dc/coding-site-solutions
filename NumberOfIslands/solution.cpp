class Solution {
public:
    /**
     * DFS solution (using stack)
     */
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
    /**
     * BFS solution (using queue)
     */ 
    bool isValid(vector<vector<char>>& grid, int row, int col) {
        if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] == '0')
            return false;
        return true;
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        vector<pair<int, int>> dirs = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == '1') {
                    count++;
                    queue<pair<int, int>> q;
                    q.push({i,j});
                    grid[i][j] = '0';
                    while (!q.empty()) {
                        pair<int, int> front = q.front();
                        q.pop();
                        for (pair<int, int> dir : dirs) {
                            int new_row = front.first + dir.first;
                            int new_col = front.second + dir.second;
                            if (isValid(grid, new_row, new_col)) {
                                q.push({new_row, new_col});
                                grid[new_row][new_col] = '0';
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};
