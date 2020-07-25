int findIndex(vector<int> v, int value) {
    auto it = find(v.begin(), v.end(), value);
    return distance(v.begin(), it);
}

class Solution {
public:
    // iterative approach
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;

        int flag, index;
        for (int i=0; i<nums1.size(); i++) {
            flag = 0;
            index = findIndex(nums2, nums1[i]) + 1;
            for (int j=index; j<nums2.size(); j++) {
                if (nums2[j] > nums1[i]) {
                    v.push_back(nums2[j]);
                    flag = 1;
                    break;
                }
            }
            if (!flag)
                v.push_back(-1);
        }
        return v;
    }
};