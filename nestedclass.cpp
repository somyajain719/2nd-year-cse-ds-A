#include <bits/stdc++.h>
using namespace std;
class Bank
{
public:
    class Account
    {
    private:
    int accountNumber;
    double balance;
    public:
    Account(int number,double amount)
    {
        accountNumber=number;
        balance=amount;
    }
    void showAccount()
    {
        cout << "   Acoount number:"<<accountNumber << endl;
        cout<<"balance:?"<<balance<<endl;
    }
};
public:
void createAccount()
{
    Account customer1(101,50000);
    customer1.showAccount();
}
};


