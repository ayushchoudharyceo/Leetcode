class Solution {
public:
    bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& tar) {
        vector<bool> res(4, true);
        int n = matrix.size();
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) 
            {                 
                if(matrix[i][j] != tar[j][n - 1 - i]) res[0] = false;
                if(matrix[i][j] != tar[n - 1 - i][n - 1 - j]) res[1] = false;
                if(matrix[i][j] != tar[n - 1 - j][i]) res[2] = false;
                if(matrix[i][j] != tar[i][j]) res[3] = false; 
            }
        }
        
        return res[0] || res[1] || res[2] || res[3];
    }
};