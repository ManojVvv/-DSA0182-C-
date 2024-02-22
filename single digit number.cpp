#include <iostream>

int main() {
    int digit;

    std::cout << "Enter a single-digit number: ";
    std::cin >> digit;

    if (digit >= 0 && digit <= 9) {
        switch (digit) {
            case 0:
                std::cout << "Zero";
                break;
            case 1:
                std::cout << "One";
                break;
            case 2:
                std::cout << "Two";
                break;
            case 3:
                std::cout << "Three";
                break;
            case 4:
                std::cout << "Four";
                break;
            case 5:
                std::cout << "Five";
                break;
            case 6:
                std::cout << "Six";
                break;
            case 7:
                std::cout << "Seven";
                break;
            case 8:
                std::cout << "Eight";
                break;
            case 9:
                std::cout << "Nine";
                break;
        }
        std::cout << std::endl;
    } else {
        std::cout << "Invalid input. Please enter a single-digit number." << std::endl;
    }

    return 0;
}



