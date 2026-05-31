class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<int> res;
        for(int i: nums){
            count[i]++;
        }
        vector<vector<int>> vec(nums.size()+1);
        
        for(auto const& [key,value] : count){
            vec[value].push_back(key);
        }
        
        
        for(int i=vec.size()-1;i>0;i--){
            for(int j: vec[i]){
                res.push_back(j);
                if(res.size()>=k){
                    return res;
                }
            }
            
        }
        return res;
    }
};
