#include <iostream> 
using namespace std; 
 
#define MAX 5 
 
class Queue 
{ 
private: 
    int arr[MAX]; 
    int front, rear; 
 
public: 
 
    // Constructor 
    Queue() 
    { 
        front = -1; ;
        rear = -1; 
    } 
    // Enqueue 
    void enqueue(int value) 
    { 
        if (rear == MAX - 1) 
        { 
            cout << "Queue Overflow" << endl; 
            return; 
        } 
 
        if (front == -1) 
        { 
            front = 0; 
        } 
 
        rear++; 
        arr[rear] = value; 
 
        cout << value << " inserted into queue" << endl; 
    } 
 
    // Dequeue 
    void dequeue() 
    { 
        if (front == -1) 
        { 
            cout << "Queue Underflow" << endl; 
            return; 
        } 
 
        cout << arr[front] << " deleted from queue" << endl; 
        front++; 
 
        if (front > rear) 
        { 
            front = -1; 
            rear = -1; 
        } 
    } 
 
    // Peek 
    void peek() 
    { 
        if (front == -1) 
        { 
            cout << "Queue is Empty" << endl; 
        } 
        else 
        { 
            cout << "Front element is: " << arr[front] << endl; 
        } 
    } 
 
    // Display 
    void display() 
    { 
        if (front == -1) 
        { 
            cout << "Queue is Empty" << endl; 
            return; 
        } 
 
        cout << "Queue elements are: "; 
 
        for (int i = front; i <= rear; i++) 
        { 
            cout << arr[i] << " "; 
        } 
 
        cout << endl; 
    } 
}; 
 
int main() 
{ 
    Queue q; 
    int choice, value; 
 
    do 
    { 
        cout << "\n----- QUEUE MENU -----" << endl; 
        cout << "1. Enqueue" << endl; 
        cout << "2. Dequeue" << endl; 
        cout << "3. Peek" << endl; 
        cout << "4. Display" << endl;	 
        cout << "5. Check Empty" << endl; 
        cout << "6. Check Full" << endl; 
        cout << "7. Exit" << endl; 
 
        cout << "Enter your choice: "; 
        cin >> choice; 
 
        switch (choice) 
        { 
        case 1: 
            cout << "Enter value: "; 
            cin >> value; 
            q.enqueue(value); 
            break; 
 
        case 2: 
            q.dequeue(); 
            break; 
 
        case 3: 
            q.peek(); 
            break; 
 
        case 4: 
            q.display(); 
            break; 
 
        case 5: 
            cout << "Program terminated." << endl; 
            break; 
 
        default: 
            cout << "Invalid choice!" << endl; 
        } 
 
    } while (choice != 5); 
 
    return 0; 
} 
