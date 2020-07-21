// 804. Unique Morse Code Words
// https://leetcode.com/problems/unique-morse-code-words/
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<char, string> mp;
        char ch = 'a';
        for (auto pattern: v) {
            mp[ch] = pattern;
            ch++;
        }

        set<string> s;
        for (int i=0; i<words.size(); i++) {
            string morse = "";
            for (int j=0; j<words[i].size(); j++) {
                morse += mp[words[i][j]];
            }
            s.insert(morse);
        }

        return s.size();
    }
};