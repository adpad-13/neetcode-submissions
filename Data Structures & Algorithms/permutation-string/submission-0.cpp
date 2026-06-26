class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> count(26,0);
        for(char c:s1){
            count[c-'a']++;
        }

        int l=0,r=0;
        if(s1.size()>s2.size()){
            return false;
        }
        while(r<s2.size()){
             
            
            while(count[s2[r]-'a']==0){
                count[s2[l]-'a']++;
                l++;
                }
                count[s2[r]-'a']--;
                
            
            
            if((r-l+1)==s1.size()){
                return true;
            }
            r++;
        }
        return false;
    }
};
