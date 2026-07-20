class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int totalElements = m * n;
        k = k % totalElements;
        if (k == 0) return grid;
        vector<vector<int>> result(m, vector<int>(n));
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                int currIndex = i * n + j;
                
                int newIndex = (currIndex + k) % totalElements;
                
                result[newIndex / n][newIndex % n] = grid[i][j];
            }
        }
        
        return result;
    }
};