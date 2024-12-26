#include <iostream>
using namespace std;

int main() {
    int a, b;
    char sign;
    cout << "Enter the first integer: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;
    cout << "Enter an sign (+, -, *, /): ";
    cin >> sign;

    switch (sign) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid sign." << endl;
    }
    return 0;
}
