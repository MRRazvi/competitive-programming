// 704. Binary Search
// https://leetcode.com/problems/binary-search/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0)
            return -1;

        int L=0, R=nums.size()-1;
        while (L <= R) {
            int M = L+(R-L)/2;
            if (nums[M] == target)
                return M;
            if (nums[M] > target)
                R = M-1;
            else
                L = M+1;
        }
        return -1;
    }
};