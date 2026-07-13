class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int i=0;
        while(i<image.size())
        {
            int j=0,k=0;
            while(j<image[i].size())
            {
                if(image[i][j] == 0) image[i][j]=1; 
                else image[i][j] = 0;
                j++;
            }
            reverse(image[i].begin(), image[i].end());
            i++;
        }
        return image;
    }
};