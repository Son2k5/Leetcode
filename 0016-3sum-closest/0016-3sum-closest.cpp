class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closetSum= INT_MIN;
        int minDiffAbs = INT_MAX;
        for(int i = 0; i< n -2; i++){
            int l = i+1;
            int r = n -1;
            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];
                int diffAbs = abs(sum - target);
                if(diffAbs < minDiffAbs ){
                    minDiffAbs = diffAbs;
                    closetSum = sum;
                } 
                if(target > sum){
                    l++;
                }
                else if(target<sum) r--;
                else return sum;
            }
            
        }
        return closetSum;
    }
};