class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> count;
        
        vector<vector<string>> listOfAnagrams;
        for(const string& s: strs){
            vector<int> arr(26,0);
            for (char c: s){
                arr[c-'a']++;
            }
            auto& vec = count[arr];
            vec.emplace_back(s);
        }
        listOfAnagrams.reserve(count.size());
        for(const auto& [key,value] : count){
            listOfAnagrams.emplace_back(value);
        }
        return listOfAnagrams;
    }
};
