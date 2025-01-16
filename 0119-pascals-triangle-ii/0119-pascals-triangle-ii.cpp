class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> triangle{1};
        for(int i =1; i <= rowIndex ;i++){
            vector<int> row(i+1,1);
            for(int j = 1; j < i;j++){
                row[j] = triangle[j-1] + triangle[j];
            }
            triangle = row;
        }
        return triangle;
    }
};