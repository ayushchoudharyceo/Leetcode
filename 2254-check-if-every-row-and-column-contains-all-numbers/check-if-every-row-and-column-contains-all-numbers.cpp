class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) 
    {
      int n = matrix.size();
      for(int i=0; i<n;i++)
      {
        unordered_set<int> set_r;
        unordered_set<int> set_col;
        for(int j=0;j<n;j++)
        {
            set_r.insert(matrix[i][j]);
            set_col.insert(matrix[j][i]);
        }
        if(set_r.size() < n || set_col.size() < n) return false;                
      }  
      return true;
    }
};