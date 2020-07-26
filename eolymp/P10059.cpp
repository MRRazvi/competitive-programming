void InOrder(TreeNode *tree) {
    if (tree) {
        InOrder(tree->left);
        printf("%d ", tree->val);
        InOrder(tree->right);
    }
}