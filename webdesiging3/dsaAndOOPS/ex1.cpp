#include <iostream>
#include <iomanip>
#include <string>

class BankAccount {
private:
    int accountNumber;
    std::string accountHolder;
    double balance;

    // Static members: Shared across all instances of the class
    static int totalAccounts;
    static double totalBankReserves;

public:
    BankAccount(int accNum, const std::string& name, double initialDeposit)
        : accountNumber(accNum), accountHolder(name), balance(initialDeposit) {
        totalAccounts++;
        totalBankReserves += initialDeposit;
    }

    ~BankAccount() {
        totalBankReserves -= balance;
        totalAccounts--;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            totalBankReserves += amount;
        }
    }

    // Static member function: Operates only on static data
    static void displaySystemStats() {
        std::cout << "\n==============================\n"
                  << "       BANK SYSTEM STATS      \n"
                  << "==============================\n"
                  << "Active Accounts : " << totalAccounts << "\n"
                  << "Total Reserves  : $" << std::fixed << std::setprecision(2) 
                  << totalBankReserves << "\n"
                  << "==============================\n";
    }

    // Friend function declaration: Grants controlled access to private data
    friend void externalAudit(const BankAccount& account, double complianceLimit);
};

// Allocate and initialize static members in global scope
int BankAccount::totalAccounts = 0;
double BankAccount::totalBankReserves = 0.0;

// Friend function definition (independent non-member function)
void externalAudit(const BankAccount& account, double complianceLimit) {
    // Direct access to private members: accountNumber, accountHolder, and balance
    std::cout << "\n[AUDIT LOG] Inspecting Account #" << account.accountNumber 
              << " (" << account.accountHolder << ")\n"
              << "  Recorded Balance: $" << std::fixed << std::setprecision(2) 
              << account.balance << "\n";

    if (account.balance >= complianceLimit) {
        std::cout << "  Verdict: Flagged for high-value tax assessment.\n";
    } else {
        std::cout << "  Verdict: Standard retail account.\n";
    }
}

int main() {
    // 1. Shared data reflects initial zero state
    BankAccount::displaySystemStats();

    // 2. Instantiate accounts to modify shared static data
    BankAccount acc1(1001, "Alice", 12500.0);
    BankAccount acc2(1002, "Bob", 3200.0);

    acc1.deposit(1500.0);

    // 3. Shared state updates globally across all objects
    BankAccount::displaySystemStats();

    // 4. Controlled private access via friend function
    externalAudit(acc1, 10000.0);
    externalAudit(acc2, 10000.0);

    return 0;
}