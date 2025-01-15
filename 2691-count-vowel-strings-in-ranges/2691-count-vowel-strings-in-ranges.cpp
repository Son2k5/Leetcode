class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefix(n+1, 0);
        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u'};
        for(int i =0; i< n; i++){
            prefix[i+1]= prefix[i];
            if(vowel.count(words[i].front()) && vowel.count(words[i].back())){
                prefix[i+1]++;
            }
        }
        vector<int> result;
        for(auto &query: queries){
            auto l= query[0];
            auto r= query[1];
            result.push_back(prefix[r+1]- prefix[l]);

        }
        return result;
    }
};