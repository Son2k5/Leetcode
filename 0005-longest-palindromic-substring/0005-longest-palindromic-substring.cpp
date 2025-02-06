class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <= 1){
            return s;
        }
        int start = 0;
        int end = 0;
        int max_length= 0;
        for(int i = 0; i<s.length();i++){
            expandFromCenter(s,i,i,start,max_length);

            expandFromCenter(s, i, i+1, start, max_length);
        }
        return s.substr( start, max_length);
    }
private:
    void expandFromCenter( string& s, int left, int right, int& start, int& max_length){
        while(left >= 0 && right< s.length() && s[left] == s[right]){
            int curr_len = right - left +1;
            if(curr_len > max_length){

                max_length = curr_len;
                start = left;
            }
            left --;
            right ++;
        }
    }
};