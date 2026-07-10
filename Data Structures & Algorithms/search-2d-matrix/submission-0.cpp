class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix.size()-1;
        while(l<=r){
            int arrIndex = l + (r-l) /2 ;
            int currSize = matrix[arrIndex].size();
            if(target<matrix[arrIndex][0]){
                r = arrIndex-1;
            }
            else if(target>matrix[arrIndex][currSize-1]){
                l = arrIndex+1;
            }
            else{
                int start = 0;
                int end = currSize-1;
                while(start<=end){
                    int mid = start + (end-start)/ 2;
                    if(matrix[arrIndex][mid]==target){
                        return true;
                    }
                    if(matrix[arrIndex][mid]>target){
                        end = mid-1;
                    }
                    if(matrix[arrIndex][mid]<target){
                        start = mid+1;
                    }   
                }
                return false;
            }
            
        }
        return false;
    }
};
// using the double binary search approach