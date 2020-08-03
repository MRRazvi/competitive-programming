// 1. Two Sum
// https://leetcode.com/problems/two-sum/
class Solution {
public:
    // Loop - O(n^2)
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for (int i=0; i<nums.size(); i++) {
            for (int j=i+1; j<nums.size(); j++) { // because we check previous already
                if (nums[i] + nums[j] == target && i != j) {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;
    }
};