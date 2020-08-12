/**
 * It's my own implementation of linked list with all the standards
 * ADT's such as:
 *
 * - push_front, push_at, push_back
 * - pop_front, pop_at, pop_back
 * - get, find
 * - is_empty, size
 * - traverse
 *
 * @author Mubashir R. Razvi
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct ListNode {
    int data;
    struct ListNode *next;
} ListNode;

ListNode* HEAD = NULL; // pointer to track position of first element

void push_front(int data); // add element at front of list
void push_at(int data, int index); // add element at specific index
void push_back(int data); // add element at the last
int pop_front(); // delete element from front and return the value
int pop_at(int index); // delete element from specific index
int pop_back(); // delete element from last
int get(int index); // get the value from specific index
bool find(int value); // check the value exist in list or not
int size(); // list size
bool is_empty(); // check list is empty
void traverse(); // display all the elements in list

void push_front(int data) {
    ListNode* node = (ListNode*) malloc(sizeof(ListNode));
    node->data = data;
    node->next = HEAD;
    HEAD = node;
}

void push_at(int data, int index) {
    ListNode* node = (ListNode*) malloc(sizeof(ListNode));
    node->data = data;
    if (HEAD == NULL) {
        node->next = HEAD;
        HEAD = node;
    } else {
        ListNode* temp = HEAD;
        ListNode* last;
        int count = 0;
        while (temp != NULL) {
            if (count == index) {
                node->next = temp;
                last->next = node;
                return;
            }

            count++;
            last = temp;
            temp = temp->next;
        }
    }
}

void push_back(int data) {
    ListNode* node = (ListNode*) malloc(sizeof(ListNode));
    node->data = data;
    if (HEAD == NULL) {
        node->next = HEAD;
    } else {
        ListNode* temp = HEAD;
        ListNode* last;
        while (temp != NULL) {
            last = temp;
            temp = temp->next;
        }
        last->next = node;
        node->next = NULL;
    }
}

int pop_front() {
    ListNode* temp = HEAD;
    HEAD = temp->next;
    int value = temp->data;
    return value;
}

int pop_at(int index) {
    if (index == 0) {
        return pop_front();
    }

    if (index == size()-1) {
        return pop_back();
    }

    ListNode* temp = HEAD;
    ListNode* last;
    int count = 0;
    while(temp != NULL) {
        if (count == index) {
            last->next = temp->next;
            int value = temp->data;
            return value;
        }
        count++;
        last = temp;
        temp = temp->next;
    }
    return -1;
}

int pop_back() {
    ListNode* temp = HEAD;
    ListNode* last;
    while(temp->next != NULL) {
        last = temp;
        temp = temp->next;
    }
    last->next = NULL;
    int value = temp->data;
    return value;
}

int get(int index) {
    ListNode* temp = HEAD;
    int count = 0;
    while (temp != NULL) {
        if (count == index) {
            return temp->data;
        }
        count++;
        temp = temp->next;
    }
    free(temp);
    return -1;
}

bool find(int value) {
    ListNode* temp = HEAD;
    while(temp != NULL) {
        if (temp->data == value) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int size() {
    ListNode* temp = HEAD;
    int count = 0;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    free(temp);
    return count;
}

bool is_empty() {
    return size() == 0;
}

void traverse() {
    ListNode* temp = HEAD;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    free(temp);
}
