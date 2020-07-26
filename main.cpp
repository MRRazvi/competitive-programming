#include <iostream>
#include <map>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void PreOrder(TreeNode *tree);
void InOrder(TreeNode *tree);
void Postrder(TreeNode *tree);
TreeNode* Minimum(TreeNode *tree);
TreeNode* Maximum(TreeNode *tree);
TreeNode* Find(TreeNode *tree, int element);
int Sum(TreeNode *tree);
bool isSame(TreeNode *tree1, TreeNode *tree2);

int main() {
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(10);

    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    root->right->left = new TreeNode(9);
    root->right->right = new TreeNode(16);

    PreOrder(root); cout << endl;
    InOrder(root); cout << endl;
    Postrder(root); cout << endl;
    cout << "Minimum: " << Minimum(root)->val << endl;
    cout << "Maximum: " << Maximum(root)->val << endl;
    cout << "Sum: " << Sum(root) << endl;
}

void PreOrder(TreeNode *tree) {
    if (tree) {
        printf("%d ", tree->val);
        PreOrder(tree->left);
        PreOrder(tree->right);
    }
}

void InOrder(TreeNode *tree) {
    if (tree) {
        InOrder(tree->left);
        printf("%d ", tree->val);
        InOrder(tree->right);
    }
}

void Postrder(TreeNode *tree) {
    if (tree) {
        Postrder(tree->left);
        Postrder(tree->right);
        printf("%d ", tree->val);
    }
}

TreeNode* Minimum(TreeNode *tree) {
    if (tree == nullptr)
        return nullptr;
    if (tree->left == nullptr)
        return tree;
    Minimum(tree->left);
}

TreeNode* Maximum(TreeNode *tree) {
    if (tree == nullptr)
        return nullptr;
    if (tree->right == nullptr)
        return tree;
    Maximum(tree->right);
}

TreeNode* Find(TreeNode *tree, int element) {
    if (tree) {
        if (tree->val == element)
            return tree;
        Find(tree->left, element);
        Find(tree->right, element);
    }

    return tree;
}

int Sum(TreeNode *tree) {
    if (tree == nullptr)
        return 0;
    return (tree->val + Sum(tree->left) + Sum(tree->right));
}

bool isSame(TreeNode *tree1, TreeNode *tree2) {
    if (tree1 && tree2) {
        if (tree1->val != tree2->val)
            return false;
        isSame(tree1->left, tree2->left);
        isSame(tree1->right, tree2->right);
    }

    return true;
}