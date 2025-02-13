class Solution {
public:
    void findAllSolution(vector<int>& nums,vector<int>& v,vector<vector<int>>& sol,int i,int target)
    {
        if(target == 0) {
            sol.push_back(v);
            return;
        }
        if(i==nums.size() or target<0) return;
        v.push_back(nums[i]);
        findAllSolution(nums,v,sol,i,target-nums[i]);
        v.pop_back();
        findAllSolution(nums,v,sol,i+1,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        vector<vector<int>> ans;
        findAllSolution(candidates,v,ans,0,target);
        return ans;
    }
};