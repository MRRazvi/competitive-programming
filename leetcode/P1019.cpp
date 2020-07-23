// 1019. Next Greater Node In Linked List
// https://leetcode.com/problems/next-greater-node-in-linked-list/
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode *tempi = head;
        while (tempi != NULL) {
            ListNode *tempj = tempi->next;
            int max = tempi->val;
            while (tempj != NULL) {
                if (tempj->val > max) {
                    max = tempj->val;
                    break;
                }
                tempj = tempj->next;
            }
            if (max == tempi->val)
                ans.push_back(0);
            else
                ans.push_back(max);
            tempi = tempi->next;
        }
        return ans;
    }
};