void PostOrder(TreeNode *tree) {
    if (tree) {
        PostOrder(tree->left);
        PostOrder(tree->right);
        printf("%d ", tree->val);
    }
}