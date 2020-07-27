#include <iostream>
#include <vector>

using namespace std;

// generating subsets
// [1,2,3]
// [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
vector<vector<int>> subsets(vector<int>& nums) {
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
    return subsets;
}

// generating unique subsets
// [1,2,2]
// [[],[1],[1,2],[1,2,2],[2],[2,2]]
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