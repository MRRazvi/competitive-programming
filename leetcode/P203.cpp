// 203. Remove Linked List Elements
// https://leetcode.com/problems/remove-linked-list-elements
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp = head;
        vector<int> v;
        while (temp != NULL) {
            if (temp->val != val)
                v.push_back(temp->val);
            temp = temp->next;
        }

        // special case
        if (v.size() == 0) {
            head = NULL;
            return head;
        }

        temp = head;
        for (int i=0; i<v.size(); i++) {
            temp->val = v[i];
            if (i==v.size() - 1) {
                temp->next = NULL;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
};