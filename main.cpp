#include <iostream>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int main() {

}

void PreOrder(TreeNode *tree) {
    if (tree) {
        printf("%d ", tree->val);
        PreOrder(tree->left);
        PreOrder(tree->right);
    }
}