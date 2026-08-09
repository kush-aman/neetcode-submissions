class Solution {
public:
    int maxArea(vector<int>& heights) {
        int low = 0, high = heights.size() - 1;
        int maxi = INT_MIN;
        while(low < high){
            if(heights[low] < heights[high]){
                int cur = min(heights[low],heights[high]);
                int multi = cur * (high - low);
                maxi = max(maxi, multi);
                low++;
            }
            else{
                int cur = min(heights[low],heights[high]);
                int multi = cur * (high - low);
                maxi = max(maxi, multi);
                high--;
            }
        }
        return maxi;
    }
};
