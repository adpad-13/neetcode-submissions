class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> found(256,-1);
        int l = 0 , r = 0 , maxLen = 0;
        int n = s.size();
        while(r<n){
            if(found[s[r]]!=-1){
                if(found[s[r]]>=l){
                    l = found[s[r]] + 1;
                }
            }
            int len = r-l+1;
            maxLen = max(len,maxLen);
            found[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};
