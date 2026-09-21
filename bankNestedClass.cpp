#include <iostream>
using namespace std;

class Bank
{
public:
    class Account
    {
    public:
        void display()
        {
            cout << "This is a bank account." << endl;
        }
    };
};

int main()
{
    Bank::Account accountObj;
    accountObj.display();
    return 0;
}
