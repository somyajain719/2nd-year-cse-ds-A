#include <iostream>
using namespace std;

class queue
{
    int *arr;
    int front, rear, size, count;

public:
    queue(int s)
    {
        front = rear = 0;
        size = s;
        count = 0;
        arr = new int[s];
    }

    bool isfull()
    {
        return count == size;
    }

    bool isempty()
    {
        return count == 0;
    }

    void push(int x)
    {
        if (isfull())
        {
            cout << "Queue is full" << endl;
            return;
        }

        arr[rear] = x;
        rear = (rear + 1) % size;
        count++;
    }

    void pop()
    {
        if (isempty())
        {
            cout << "Queue is empty" << endl;
            return;
        }

        front = (front + 1) % size;
        count--;
    }

    int start()
    {
        if (isempty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return arr[front];
    }
};

int main()
{
    queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
 q.push(80);
  q.push(90);
    cout << q.start() << endl;  // 10

    q.push(40);                  // Queue is full

    q.pop();
    cout << q.start() << endl;  // 20

    q.pop();
    cout << q.start() << endl;  // 30

    q.push(40);
    cout << q.start() << endl;  // 30

    q.pop();
    cout << q.start() << endl;  // 40

    return 0;
}