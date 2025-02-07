class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int max_amount = 0;
        while(left < right){
            int h = min(height[left], height[right]);
            int w = right - left;
            max_amount= max(max_amount, h*w);
            if(height[left]< height[right]){
            left++;
            }   
            else{
                right--;
            }
        }
        
        return max_amount;
    }
};