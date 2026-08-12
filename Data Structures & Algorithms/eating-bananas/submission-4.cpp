class Solution {
public:
    long long rate(vector<int> piles,int eat){
        long long hr = 0;
        for(int i = 0;i < piles.size();i++){
           hr += ceil((double)piles[i] / eat); 
        }

        return hr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());

        int ans = high;
      while(low <= high){
        int mid = low + (high - low) / 2;
        if(rate(piles,mid) <= h){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
      } 
      return ans;
    }
};
