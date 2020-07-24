class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        list<int> l;
        for (auto num: nums)
            l.push_back(num);

        for (int i=0; i<k; i++) {
            l.push_front(l.back());
            l.pop_back();
        }

        int index = 0;
        for (auto num: l)
            nums[index++] = num;
    }
};