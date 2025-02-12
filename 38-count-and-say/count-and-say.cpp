class Solution {
public:
    string countAndSay(int n) {
        if(n== 1) return "1";
        string result = "";
        int count = 1;
        string prev = countAndSay(n-1);
        for(size_t   i = 0; i< prev.length();i++){
            if(i+1 < prev.length() && prev[i]==prev[i+1]) count ++;
            else{
                result += to_string(count)+ prev[i];
                count = 1;
            }
        }
        return result;
    }
};