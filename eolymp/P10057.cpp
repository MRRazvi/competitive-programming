void PreOrder(TreeNode *tree) {
    if (tree) {
        printf("%d ", tree->val);
        PreOrder(tree->left);
        PreOrder(tree->right);
    }
}