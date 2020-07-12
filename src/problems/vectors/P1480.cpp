#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// @leetcode
// https://leetcode.com/problems/running-sum-of-1d-array/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v(nums.size());
        for (int i=0; i<nums.size(); i++) {
            v[i] = accumulate(nums.begin(), nums.begin() + i + 1, 0);
        }
        return v;
    }
};

int main() {
    vector<int> i1 = {1,2,3,4};
    vector<int> i2 = {1,1,1,1,1};
    vector<int> i3 = {3,1,2,10,1};

    Solution solution;
    vector<int> o1 = solution.runningSum(i1);
    vector<int> o2 = solution.runningSum(i2);
    vector<int> o3 = solution.runningSum(i3);

    for(auto num: o1)
        cout << num << " ";
    cout << endl;

    for(auto num: o2)
        cout << num << " ";
    cout << endl;

    for(auto num: o3)
        cout << num << " ";
    cout << endl;
    return 0;
}
