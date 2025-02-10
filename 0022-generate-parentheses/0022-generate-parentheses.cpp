class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        dfs(0, 0, "",  n,  result);
        return result;

    }
private:
    void dfs(int open, int close, string s, int n, vector<string> &result){
        if(open< n){
            dfs(open+1, close, s+ "(",  n,  result );
        }
         if(close <open){
            dfs(open, close +1, s+ ")", n,  result);
        }
         if(open == close && close + open == n*2){
            result.push_back(s);
            return;
        }
    }
};