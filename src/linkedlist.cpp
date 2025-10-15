#include <iostream>
using namespace std;

// Node class representing each element in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class managing the linked list operations
class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Function to insert a node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (!head)
            head = newNode;
        else {
            Node* temp = head;
            while (temp->next != nullptr)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    // Function to print all elements in the linked list
    void print() {
        // TODO: Traverse and print all elements
    }

    // Function to calculate the length of the linked list
    int length() {
        // TODO: Traverse and count all nodes
        return 0;
    }

    // Function to insert before a specific value
    void insertBefore(int target, int newValue) {
        // TODO: Insert newValue before target node
    }

    // Function to insert after a specific value
    void insertAfter(int target, int newValue) {
        // TODO: Insert newValue after target node
    }

    // Function to delete node before a specific value
    void deleteBefore(int target) {
        // TODO: Delete node before target node
    }

    // Function to delete node after a specific value
    void deleteAfter(int target) {
        // TODO: Delete node after target node
    }
};

// Main function for testing
int main() {
    LinkedList list;
    int n, value;

    cout << "Enter number of elements to insert: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> value;
        list.insertAtEnd(value);
    }

    cout << "Initial List: ";
    list.print();

    cout << "Length of list: " << list.length() << endl;

    // Demonstration of insertBefore, insertAfter, deleteBefore, deleteAfter
    cout << "\nInsert a value before a given element:\n";
    list.insertBefore(20, 15); // Example
    list.print();

    cout << "\nInsert a value after a given element:\n";
    list.insertAfter(30, 35); // Example
    list.print();

    cout << "\nDelete node before a given element:\n";
    list.deleteBefore(20);
    list.print();

    cout << "\nDelete node after a given element:\n";
    list.deleteAfter(30);
    list.print();

    return 0;
}
