class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        vector<string> mapping = { "", "", "abc","def", "ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> dp = {""};
        for(char digit: digits){
            vector<string> temp;
            string letters = mapping[digit - '0'];
            for(const string &prev : dp){
                for(char letter : letters){
                    temp.push_back(prev + letter);
                }
            }
            dp.swap(temp);
        }
        return dp;
    }
};