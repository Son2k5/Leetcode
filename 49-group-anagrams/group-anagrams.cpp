class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> arrMap;
        for(const string& word: strs){
            string totalWord = word;
            sort(totalWord.begin(), totalWord.end());
            arrMap[totalWord].push_back(word);
        }
        vector<vector<string>> result;
        for(auto& i: arrMap){
            result.push_back(i.second);
        }
        return result;
    }
};