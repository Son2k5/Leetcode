class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int > count = {{0,0},{1,0},{2,0}};
        for(int num : nums){
            count[num] ++;
        }
        int index =0;
        for(int color= 0; color <3; color++){
            int temp = count[color];
            for(int i = 0; i < temp ;i++){
                nums[index]= color;
                index++;
            }
        }
    }
};