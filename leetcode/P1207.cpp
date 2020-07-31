// 1207. Unique Number of Occurrences
// https://leetcode.com/problems/unique-number-of-occurrences/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        for (auto num: arr) {
            mp.insert({num, 0});
            mp[num]++;
        }

        set<int> s;
        for (auto num: mp) {
            s.insert(num.second);
        }

        if (s.size() != mp.size())
            return false;
        return true;
    }
};