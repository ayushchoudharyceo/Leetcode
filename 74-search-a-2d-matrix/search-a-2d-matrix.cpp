class Solution {
public:
    bool searchMatrix(vector<vector<int>>& image, int target) {
        int i=0;
        while(i<image.size())
        {
            if(binary_search(image[i].begin(), image[i].end(), target)) return true;
            i++;
        }
        return false;
    }
};