class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> merged;
        merged.push_back(intervals[0]);
        for(int i = 0; i< intervals.size(); i++){
            vector<int>& last_value = merged.back();
            if(intervals[i][0] <= last_value[1]){
                last_value[1] = max(last_value[1], intervals[i][1]);
            
            }
            else{
                merged.push_back(intervals[i]);
            }
        }
        return merged;
    }
};