class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0;
        int bottom = matrix.size()-1;
        while(top <= bottom){
            int mid = (top + bottom) /2;
            if(matrix[mid][0]  <= target && matrix[mid].back() >= target){
                top = mid;
                break;
            }
            if(matrix[mid].back() > target) bottom = mid -1;
            else{
                top = mid +1;
            }
        }
        if(top >= matrix.size()) return false;

        int row = top;
        int left = 0;
        int right = matrix[row].size() -1;
        while(left <= right){
            int mid = (left + right) /2;
            if(matrix[row][mid] == target){
                return true;
            }
            if(matrix[row][mid] > target){
                right = mid -1;
            }
            if(matrix[row][mid] < target){
                left = mid + 1;
            }
        }
        return false;
    }
};