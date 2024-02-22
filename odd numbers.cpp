#include <iostream>
int main() {
    std::cout << "Odd numbers from 1 to 10: ";
    for (int i = 1; i <= 10; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
