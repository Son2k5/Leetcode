class Solution {
public:
    int jump(vector<int>& nums) {
        int jump =0, far =0 , near = 0;
        int n = nums.size();
        while(far < n-1){
            int farthest = 0;
            for(int i = near; i<= far ;i++){
                farthest = max(farthest, i + nums[i]);
            }
            near = far+1;
            far= farthest;
            jump++;
        }
        return jump;

    }
};