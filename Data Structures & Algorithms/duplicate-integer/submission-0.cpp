class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> found;

        for(int k:nums){
            found[k]=0;
        }

        for (int k:nums){
            found[k]++;
        }

        for(const auto& [key,val] : found){
            if (val>1){
                return true;
            }
        }
        return false;
    }
};