class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p = 0;
        int count = 1;
        for(int i= 0; i < nums.size();i++){
            if(i == 0) count = 1;
            else if(nums[i] == nums[i-1]) count++;
            else count = 1;

            if(count < 3){
                nums[p]= nums[i];
                p++;
            }
        }
        return p;
    }
};