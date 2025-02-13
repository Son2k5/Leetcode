class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> temp;
        find_combination_sum(candidates, 0, target, result, temp);
        return result;
    }
    void find_combination_sum(vector<int> & candidates, int start, int target, vector<vector<int>> &result, vector<int> & temp){
        if(target == 0){
            result.push_back(temp);
            return;
        }
        for(int i = start ; i< candidates.size(); i++){
            if(i > start && candidates[i] == candidates[i-1]) continue;
            if(candidates[i]> target) break;
            temp.push_back(candidates[i]);
            find_combination_sum(candidates, i+1, target - candidates[i], result, temp );
            temp.pop_back();
        }

    }
};