// N-Repeated Element in Size 2N Array
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        map<int, int> mp;
        for (auto num: A) {
            mp.insert({num, 0});
            mp[num]++;
        }

        int maxLen, maxEle;
        maxLen = maxEle = 0;
        for (auto num: mp) {
            if (num.second > maxLen) {
                maxLen = num.second;
                maxEle = num.first;
            }
        }
        return maxEle;
    }
};