#include <iostream>
using namespace std;
int main() {
    char operation;
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2; 
    switch (operation) {
    case '+':
    cout << "Result: " << num1 + num2 << endl;
    break;
    case '-':
    cout << "Result: " << num1 - num2 << endl;
    break;
    case '*':
    cout << "Result: " << num1 * num2 << endl;
    break;
    case '/':
    if (num2 != 0) {
    cout << "Result: " << num1 / num2 << endl;
    } else {
    cout << "Error: Division by zero is not allowed." << endl;
    }
    break;
    default:
    cout << "Error: Invalid operation." << endl;
    break;
    }
    return 0;
}

