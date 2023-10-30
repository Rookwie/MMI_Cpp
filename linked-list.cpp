#include "linked-list.h"
#include <iostream>
#include <cstring>


    void createNewList(Node*& root) {
        root = nullptr;
    }


    int getCount(Node* root) {
        int count = 0;
        Node* current = root;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }


    void printList(Node* root) {
        int count = getCount(root);
        std::cout << "Number of elements: " << count << std::endl;

        Node* current = root;
        while (current != nullptr) {
            std::cout << current->content << std::endl;
            current = current->next;
        }
    }


    void addEntry(Node*& root, char* name) {
        Node* newNode = new Node;
        std::strcpy(newNode->content, name);
        newNode->next = nullptr;        // Letzte Element in der Node

        if (root == nullptr) {
                root = newNode;         // Sonderfall, wenn die Liste leer ist.
        } else {
            Node* current = root;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }


    Node* getEntry(Node* root, int index) {
        int count = 0;
        Node* current = root;
        while (current != nullptr) {
            if (count == index) {
                return current;         // Element gefunden
            }
            current = current->next;
            count++;
        }
        return nullptr;                 // Index liegt außerhalb der Liste.
    }


    void clearList(Node*& root) {
        while (root != nullptr) {
            Node* temp = root;
            root = root->next;
            delete temp;
        }
    }

