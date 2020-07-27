// 90. Subsets II
// https://leetcode.com/problems/subsets-ii/
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> subsets;
        int n = nums.size();
        for (int i=0; i<(1<<n); i++) {
            vector<int> sub;
            for (int j=0; j<n; j++) {
                if (i&(1<<j))
                    sub.push_back(nums[j]);
            }
            subsets.push_back(sub);
        }

        for (int i=0; i<subsets.size(); i++)
            sort(subsets[i].begin(), subsets[i].end());
        sort(subsets.begin(), subsets.end());
        subsets.erase(unique(subsets.begin(), subsets.end()), subsets.end());
        return subsets;
    }
};