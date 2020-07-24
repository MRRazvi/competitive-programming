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
//    insertBegin(2);         // 2
//    insertBegin(1);         // 1 2
//    insertBegin(0);         // 0 1 2
//    insertEnd(4);           // 0 1 2 4
//    insertEnd(5);           // 0 1 2 4 5
//    insertEnd(6);           // 0 1 2 4 5 6
//    insertAt(3, 3);   // 0 1 2 3 4 5 6
//    deleteBegin();               // 1 2 3 4 5 6
//    deleteEnd();                 // 1 2 3 4 5

    insertAt(1, 0);
    insertAt(2, 0);
    insertAt(3, 1);
    display();
}

void insertBegin(int data) {
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->next = HEAD;
    HEAD = node;
}

void insertAt(int data, int index) {
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;
    if (HEAD == nullptr) {
        node->next = HEAD;
        HEAD = node;
    }

    Node *temp = HEAD;
    Node *prev = HEAD;
    int count = 0;
    while (temp != nullptr) {
        if (count == index) {
            prev->next = node;
            node->next = temp;
            break;
        }
        count++;
        prev = temp;
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
        printf("%d ", temp->data);
        temp = temp->next;
    }
    cout << endl;
}