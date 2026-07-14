class Solution {
public:
    bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& target) {
        int n = matrix.size();
        vector<vector<int>> temp(n,vector<int>(n,0));
        for(int k=0; k<4;k++)
        {
            for(int i=0; i<n;i++)
            {
                for(int j=0;j<matrix[0].size();j++)
                {
                    temp[j][n-i-1] = matrix[i][j];
                }
            }
            matrix = temp;
            if(matrix == target) return true;
        }
        return false;
    }
};