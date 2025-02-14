class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> path;
        vector<bool> used(nums.size(), false);
        sort(nums.begin(), nums.end());
        backtracking(nums, path, used, result);
        return result;
    }
    void backtracking(vector<int>& nums, vector<int> & path, vector<bool>& used, vector<vector<int>>& result){
        if(path.size() == nums.size()){
            result.push_back(path);
            return;
        }
        for(int  i= 0; i<nums.size();i++){
            if(used[i]) continue;
            if(i > 0 && nums[i] == nums[i-1] && !used[i-1]) continue;
            used[i]= true;
            path.push_back(nums[i]);
            backtracking(nums, path, used, result);
            path.pop_back();
            used[i] = false;

        }

    }
};