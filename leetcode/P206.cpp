// 206. Reverse Linked List
// https://leetcode.com/problems/reverse-linked-list

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> v;
        ListNode *temp = head;
        while (temp != NULL) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;
        int index = v.size() - 1;
        while (temp != NULL) {
            temp->val = v[index--];
            temp = temp->next;
        }
        return head;
    }
};