class Solution {
public:
    bool searchMatrix(vector<vector<int>>& image, int target) {
        int i=0;
        while(i<image.size())
        {
            int j=0;
            while(j<image[i].size())
            {
                if(image[i][j] == target)
                {
                    return true;
                }
                j++;
            }
            i++;
        }
        return false;
    }
};