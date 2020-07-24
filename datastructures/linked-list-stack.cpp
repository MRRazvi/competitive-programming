#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *HEAD = nullptr;

void push(int data);
void pop();
int peek();
int size();
bool isEmpty();

int main() {
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    pop();
    cout << "Peek: " << peek() << endl;
    cout << "Size: " << size() << endl;
    cout << "Empty: " << isEmpty() << endl;
}

void push(int data) {
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->next = HEAD;
    HEAD = node;
}

void pop() {
    HEAD = HEAD->next;
}

int peek() {
    return HEAD->data;
}

int size() {
    Node *temp = HEAD;
    int count = 0;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

bool isEmpty() {
    return HEAD == nullptr;
}