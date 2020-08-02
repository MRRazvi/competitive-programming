// 217. Contains Duplicate
// https://leetcode.com/problems/contains-duplicate/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> us;
        for (auto num: nums) {
            if (us.count(num) > 0)
                return true;
            us.insert(num);
        }
        return false;
    }
};