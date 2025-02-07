class Solution {
public:
    int romanToInt(string s) {
        int res= 0;
        unordered_map<char, int> symbols{
            {'I', 1},{'V', 5},{'X', 10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        for(int i =0; i< s.size()-1;i++){
            if(symbols[s[i]] < symbols[s[i+1]]){
                res -= symbols[s[i]];
            }
            else{
                res+= symbols[s[i]];
            }
        }
        return res+ symbols[s[s.size()-1]];
    }
};