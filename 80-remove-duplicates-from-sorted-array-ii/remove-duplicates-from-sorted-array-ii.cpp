#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size(); // Nếu có 0 hoặc 1 phần tử, giữ nguyên

        int p = 1; // Con trỏ ghi giá trị hợp lệ (bắt đầu từ phần tử thứ 2)
        int count = 1; // Đếm số lần xuất hiện của phần tử hiện tại

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) count++; // Nếu trùng phần tử trước, tăng count
            else count = 1; // Nếu khác, reset count về 1

            if (count <= 2) { // Nếu xuất hiện <= 2 lần, ta ghi vào vị trí hợp lệ
                nums[p] = nums[i];
                p++;
            }
        }
        return p; // Trả về độ dài mới của mảng
    }
};
