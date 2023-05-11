#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP
#include <iostream>

// Node structure
typedef struct Node {
    int data;
    Node *next;
} Node;

// Function prototypes
Node *initList(int data);
void addNode(Node *head, int data);
Node *addNodeToBeginning(Node *head, int data);
void printList(Node *head);
void printListRecursive(Node *head);
void printListReverse(Node *head);
void printListReverseRecursive(Node *head);

// Function definitions
Node *initList(int data) {
    Node *head = new Node;
    head->data = data;
    head->next = NULL;
    return head;
}

void addNode(Node *head, int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

Node *addNodeToBeginning(Node *head, int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

void printList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}

void printListRecursive(Node *head) {
    if (head == NULL) return;
    std::cout << head->data << std::endl;
    printListRecursive(head->next);
}

void printListReverse(Node *head) {
    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    while (prev != NULL) {
        std::cout << prev->data << std::endl;
        prev = prev->next;
    }
}


#endif // LINKEDLIST_CPP
