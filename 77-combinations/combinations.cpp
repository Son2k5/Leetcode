class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> comp;
        backtracking(1, n , k , result, comp);
        return result;
    }
    void backtracking(int start, int n, int k , vector<vector<int>>& result, vector<int>& comp){
        if(comp.size() == k){
            result.push_back(comp);
        }
        for(int num = start; num <=n; num++){
            comp.push_back(num);
            backtracking(num+1,n ,k, result, comp);
            comp.pop_back();
        }
    }
};