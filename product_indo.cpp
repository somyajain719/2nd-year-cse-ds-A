#include <iostream>
using namespace std;

class queue
{
    int *arr;
    int front, rear, size;

public:
    queue(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[s];
    }

    bool isfull()
    {
        return rear == size - 1;
    }

    bool isempty()
    {
        return front == -1 && rear == -1;
    }

    void push(int x)
    {
        if (isfull())
        {
            cout << "Queue is full" << endl;
            return;
        }

        if (front == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }

        arr[rear] = x;
    }

    void pop()
    {
        if (isempty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }

    int start()
    {
        if (isempty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        reQ turn arr[front];
    }
};

int main()
{
    queue q(3);

    q.push(10);
    q.push(20);
    q.push(30);

    cout << q.start() << endl;

    q.push(40);  // Queue is full

    q.pop();
    cout << q.start() << endl;

    q.pop();
    cout << q.start() << endl;

    q.pop();
    cout << q.start() << endl;

    return 0;
}