#include <iostream>
using namespace std;
class Student 
{
public:
    int roll;
    string name;
    void input() 
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Student Name: ";
        cin >> name;
    }

    void display()
     {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
    }
};

int main()
 {
    Student s;
    s.input();
    s.display();
    return 0;
}
