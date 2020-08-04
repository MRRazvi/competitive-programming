// 938. Range Sum of BST
// https://leetcode.com/problems/range-sum-of-bst/
class Solution {
public:
    int ans = 0;
    int rangeSumBST(TreeNode* root, int L, int R) {
        if (root) {
            if (root->val >= L && root->val <= R)
                ans += root->val;
            rangeSumBST(root->left, L, R);
            rangeSumBST(root->right, L, R);
        }
        return ans;
    }
};