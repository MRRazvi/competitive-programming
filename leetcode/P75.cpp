// 75. Sort Colors
// https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        insertionSort(nums);
    }

    void insertionSort(vector<int>& nums) {
        int i, j, k;
        for (int i=1; i<nums.size(); i++) {
            k = nums[i];
            j = i-1;
            while (j >= 0 && nums[j] > k) {
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = k;
        }
    }
};