class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area=0,current_area,width,current_height;
        int size = height.size();
        int left=0, right= size-1;
        while(left<right)
        {
            width = right-left;
            current_height= min(height[left],height[right]);
            current_area = width*current_height;
            if(current_area>max_area) max_area= current_area;
            if(height[right]<height[left]) right--;
            else left++;
        }
        return max_area;
    }
};