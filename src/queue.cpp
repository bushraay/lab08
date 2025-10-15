#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

// Queue class
class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    // Function to insert an element at the rear
    void enqueue(int value) {
        // TODO: Implement enqueue logic
    }

    // Function to remove an element from the front
    void dequeue() {
        // TODO: Implement dequeue logic
    }

    // Function to print the queue
    void print_queue() {
        // TODO: Traverse and print all elements in queue
    }

    // Helper: Check if queue is empty
    bool isEmpty() {
        return front == nullptr;
    }
};

// Main function
int main() {
    Queue q;
    int n, val;

    cout << "Enter number of elements to enqueue: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        q.enqueue(val);
    }

    cout << "Queue after enqueue: ";
    q.print_queue();

    int d;
    cout << "Enter number of elements to dequeue: ";
    cin >> d;
    for (int i = 0; i < d; i++) {
        q.dequeue();
    }

    cout << "Queue after dequeue: ";
    q.print_queue();

    return 0;
}
