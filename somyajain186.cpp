#include <iostream>

using namespace std;

inline float divide(float a, float b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int add(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}

int multiply(int a, int b) {
    return a * b;
}

int multiply(int a, int b, int c) {
    return a * b * c;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    cout << "10.0 / 2.5 = " << divide(10.0, 2.5) << endl;
    cout << "5.0 / 0.0 = ";
    divide(5.0f, 0.0f);
    cout << endl;
    
    cout << "Add 2 numbers (5 + 10): " << add(5, 10) << endl;
    cout << Add 3 numbers (5 + 10 + 15): " << add(5, 10, 15) << endl;
    cout << "Add 4 numbers (5 + 10 + 15 + 20): " << add(5, 10, 15, 20) << endl;

    cout << "\n--- Function Overloading Demo (Multiplication) ---" << endl;
    cout << "Multiply 2 ints (4 * 5): " << multiply(4, 5) << endl;
    cout << "Multiply 3 ints (2 * 3 * 4): " << multiply(2, 3, 4) << endl;
    cout << "Multiply 2 doubles (2.5 * 1.5): " << multiply(2.5, 1.5) << endl;

    return 0;
}