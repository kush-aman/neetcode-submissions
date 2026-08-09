class Solution {
public:
    int maxArea(vector<int>& heights) {
        int low = 0, high = heights.size() - 1;
        int maxi = INT_MIN;
        while(low < high){
            int width = high - low;
            int height = min(heights[low],heights[high]);
            int area = width * height;
            maxi = max(maxi, area);
            if(heights[low] > heights[high]) high--;
            else low++;
        }
        return maxi;
    }
};
