class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<int> res;
        for(int i = 0;i < nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>> vec;
        for(auto it : mpp){
            vec.push_back({it.second,it.first});
        }
        sort(vec.begin(),vec.end());
        for(int i = 0;i < k;i++){
            int index = vec.size() - 1 - i;
            res.push_back(vec[index].second);
        }
        if(res.empty()) return nums;
        return res;
    }
};
