#include <iostream>
int reverseInteger(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}
int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    int reversedNumber = reverseInteger(number);
    std::cout << "Reversed Integer: " << reversedNumber << std::endl;

    return 0;
}

