class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> vec;
        for(const char& c:s){
            if(ispunct(c)||isspace(c)){
                continue;
            }
            vec.emplace_back(tolower(c));
        }
        vector<char> vec2 = vec;
        std::reverse(vec2.begin(),vec2.end());
        if(vec==vec2){
            return true;
        }
        return false;
    }
};
