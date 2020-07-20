// 1512. Number of Good Pairs
// https://leetcode.com/problems/number-of-good-pairs/
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (int i=0; i<nums.size(); i++) {
            for (int j=0; j<nums.size(); j++) {
                if (nums[i] == nums[j] && i < j)
                    count++;
            }
        }
        return count;
    }
};