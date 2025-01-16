class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for(auto &n: nums1){
            arr.push_back(n);
        }
        for(auto &n: nums2){
            arr.push_back(n);
        }
        sort(arr.begin(), arr.end());

        int n = arr.size();
        if(n % 2 !=0){
            return arr[n/2];
        }
        double merged_number = (arr[n/2-1] + arr[n/2])/2.00;
        return merged_number;
    }
};