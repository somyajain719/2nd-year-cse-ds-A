#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {
    // Start with an empty list
    Node* head = nullptr;
    Node* tail = nullptr;
    cout << "Enter values to insert (-1 to stop):" << endl;
    int value;
    while (cin >> value && value != -1) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            // First node being added
            head = newNode;
            tail = newNode;
        } else {
            // Append to the end
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Print the linked list
    cout << "\nLinked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    // Free allocated memory
    temp = head;
    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }

    return 0;
}