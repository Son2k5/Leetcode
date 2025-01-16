class Solution {
public:
    bool isPalindrome(string s) {
        int start =0;
        int end =s.size()-1;
        while(start<=end){
            if( !isalnum(s[start])){
                start++;
            }else if(!isalnum(s[end])){
                end--;
            }else{
                char word1 = tolower(s[start]);
                char word2 = tolower(s[end]);
                if(word1 != word2){
                    return false;
                }
                start ++;
                end--;  
            }
        }
        return true;
    }
};