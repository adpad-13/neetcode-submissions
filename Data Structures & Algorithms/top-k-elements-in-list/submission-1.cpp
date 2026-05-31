class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<int> res;
        for(int i: nums){
            count[i]++;
        }
        vector<pair<int,int>> vec;
        
        for(auto const& [key,value] : count){
            vec.push_back({value,key});
        }
        sort(vec.rbegin(),vec.rend());

        for(int i=0;i<k;i++){
            res.push_back(vec[i].second);
        }
        return res;
    }
};
