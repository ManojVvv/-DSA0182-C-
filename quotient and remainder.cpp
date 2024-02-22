#include <iostream>
using namespace std;
int main() {
    int dividend, divisor, quotient, remainder;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout << "The quotient of " << dividend << " / " << divisor << " is: " << quotient << endl;
    cout << "The remainder of " << dividend << " / " << divisor << " is: " << remainder << endl;
    return 0;
}

