class Solution {
public:
    int maxScore(string s) {
        int total_score =0;
        for(char c: s){
            if(c == '1'){
                total_score++;
            }
        }
        int max_score =0;
        int left_zeros = 0;
        int right_ones = total_score;
        for(size_t i =0; i< s.size() -1 ;i++){
            if(s[i]=='0'){
                left_zeros++;
            }else{
                right_ones--;
            }
        
            int current_score = left_zeros + right_ones;
            max_score = max(current_score , max_score);
        }
        return max_score;
    }
};