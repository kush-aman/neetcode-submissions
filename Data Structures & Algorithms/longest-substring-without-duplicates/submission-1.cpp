class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int len = 0;
        int low = 0;
        for(int i = 0; i < s.size();i++){
            while(charSet.find(s[i]) != charSet.end()){
                charSet.erase(s[low]);
                low++;
            }
            charSet.insert(s[i]);
            len = max(len,i - low + 1);
        }
        return len;
    }
};
