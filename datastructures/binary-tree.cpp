#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* insert(int data);
void preorder(Node *root);
void inorder(Node *root);
void postorder(Node *root);

int main() {
    Node *root = insert(2);
    root->left = insert(1);
    root->right = insert(3);

    cout << root->left->data;
    return 0;
}

Node* insert(int data) {
    Node *node = new struct Node;
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

void inorder(Node *root) {

}
