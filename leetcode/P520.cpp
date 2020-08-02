// 520. Detect Capital
// https://leetcode.com/problems/detect-capital/
class Solution {
public:
    bool detectCapitalUse(string word) {
        if (isupper(word[0]) && isupper(word[1])) {
            for (int i=2; i<word.size(); i++) {
                if (islower(word[i]))
                    return false;
            }
        } else if (isupper(word[0])) {
            for (int i=1; i<word.size(); i++) {
                if (isupper(word[i]))
                    return false;
            }
        } else {
            for (auto c: word) {
                if (isupper(c))
                    return false;
            }
        }
        return true;
    }
};