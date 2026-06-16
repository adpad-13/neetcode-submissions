class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0,right = heights.size()-1;
        int maxHeight =0;
        int maxVol =0;
        
        while(left<right){
            int width = right-left;
            maxHeight = min(heights[left],heights[right]);
            int vol = width*maxHeight;
            if(maxVol<vol){
                maxVol=vol;
                
            }
            if(heights[left]<heights[right]){
                
                left++;
            }
            else{
               
                right--;
            }
            
            }
        
        return maxVol;
    }
};
