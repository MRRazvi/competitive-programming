// 167. Two Sum II - Input array is sorted
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int l = 0, r = numbers.size()-1;
        while (left < right) {
            int sum = numbers[l] + numbers[r];
            if (sum == target) {
                v.push_back(l+1);
                v.push_back(r+1);
                return v;
            } else if (sum < target)
                l++;
            else
                r--;
        }
        return v;
    }
};