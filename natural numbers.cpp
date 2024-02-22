#include <iostream>
int main() {
    std::cout << "Natural numbers from 10 to 1 in reverse: ";
    for (int i = 10; i >= 1; --i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}

