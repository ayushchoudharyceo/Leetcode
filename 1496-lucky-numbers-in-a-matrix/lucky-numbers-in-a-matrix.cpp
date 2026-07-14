class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size() , n= matrix[0].size();
        vector<int>min_row(m,INT_MAX);
        vector<int>max_col(n, INT_MIN);
        for(int i=0; i<m;i++)
        {
            for(int j =0; j<n; j++)
            {
                min_row[i] = min(min_row[i],matrix[i][j]);
                max_col[j] = max(max_col[j], matrix[i][j]);
            }
        }
        vector<int>lucky;
        for(int i=0; i<m;i++)
        {
            for(int j =0; j<n; j++)
            {
                if(matrix[i][j] == min_row[i] && matrix[i][j] == max_col[j])
                {
                    lucky.push_back(matrix[i][j]);
                }
            }
        }
        return lucky;
    }
};