// 234. Palindrome Linked List
// https://leetcode.com/problems/palindrome-linked-list/
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode *temp = head;
        while (temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;
        for (int i=v.size() - 1; i>=0; i--) {
            if (temp->val != v[i]) {
                return false;
            }
            temp = temp->next;
        }
        return true;
    }
};