bool isSame(TreeNode *tree1, TreeNode *tree2) {
    if (tree1 && tree2) {
        if (tree1->val != tree2->val)
            return false;
        isSame(tree1->left, tree2->left);
        isSame(tree1->right, tree2->right);
    }

    return true;
}