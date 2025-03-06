class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // use backtracking to solve the problem
        vector<vector<int>> result;
        vector<int> comb;
        backtracking(0, result, comb, nums);
        return result;
    }
private:
    void backtracking(int start, vector<vector<int>>& result, vector<int>& comb, vector<int>& nums){
        if(start == nums.size()){
            result.push_back(comb);
            return;
        }
        comb.push_back(nums[start]);
        backtracking(start +1, result, comb, nums);
        comb.pop_back();
        backtracking(start +1, result, comb, nums);

    }
};