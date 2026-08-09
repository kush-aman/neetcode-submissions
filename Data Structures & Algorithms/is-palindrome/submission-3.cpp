class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(char c : s){
            if(isalnum(c)){
                temp.push_back(tolower(c));
            }
        }
        for(int i = 0;i < temp.size() / 2;i++){
            if(temp[i] != temp[temp.size() - i - 1]) return false;
        }
        return true;
    }
};
