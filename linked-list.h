#ifndef TESTING_LINKED_LIST_H
#define TESTING_LINKED_LIST_H

struct Node {
    char content[256];  // Inhalt
    Node* next;         // Nachfolger
};

void createNewList(Node*& root);
int getCount(Node* root);
void printList(Node* root);
void addEntry(Node*& root, char* name);
Node* getEntry(Node* root, int index);
void clearList(Node*& root);


#endif //TESTING_LINKED_LIST_H