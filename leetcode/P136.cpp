// 136. Single Number
// https://leetcode.com/problems/single-number/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> ump;
        for (auto num: nums) {
            ump.insert({num, 0});
            ump[num]++;
        }

        for (auto num: ump) {
            if (num.second == 1)
                return num.first;
        }
        return 0;
    }
};