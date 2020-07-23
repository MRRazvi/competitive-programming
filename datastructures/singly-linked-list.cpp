#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* HEAD = nullptr;

void insertBegin(int data);
void insertAt(int data, int index);
void insertEnd(int data);
void deleteBegin();
void deleteAt(int index);
void deleteEnd();
int count();
void display();

int main() {
    insertBegin(2);
    insertBegin(1);
    insertEnd(4);
    insertEnd(5);
    insertAt(3, 2);
    display();
}

void insertBegin(int data) {
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->next = HEAD;
    HEAD = node;
}

void insertAt(int data, int index) {
    if (HEAD == nullptr)
        return;

    if (index == 0) {
        insertBegin(data);
        return;
    }

    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;

    Node *temp = HEAD;
    int count = 0;
    while (temp != nullptr) {
        if (count == index - 1) {
            node->next = temp->next;
            temp->next = node;
            return;
        }
        count++;
        temp = temp->next;
    }
}

void insertEnd(int data) {
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;
    if (HEAD == nullptr) {
        node->next = nullptr;
        HEAD = node;
    } else {
        Node *temp = HEAD;
        Node *last;
        while (temp != nullptr) {
            last = temp;
            temp = temp->next;
        }
        last->next = node;
        node->next = nullptr;
    }
}

void deleteBegin() {
    deleteAt(0);
}

void deleteAt(int index) {
    if (HEAD == nullptr)
        return;

    Node *temp = HEAD;
    if (index == 0) {
        HEAD = temp->next;
        free(temp);
        return;
    }

    Node *target = nullptr;
    int count = 0;
    while (temp != nullptr) {
        if (count == index - 1) {
            target = temp->next;
            temp->next = temp->next->next;
            free(target);
            break;
        }
        count++;
        temp = temp->next;
    }
}

void deleteEnd() {
    deleteAt(count() - 1);
}

int count() {
    Node *temp = HEAD;
    int count = 0;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

void display() {
    Node *temp = HEAD;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}