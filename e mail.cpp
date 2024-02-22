 #include <iostream>
#include <cctype>

bool isValidUserName(const std::string& userName) {
    // Check if the user name is not empty
    if (userName.empty()) {
        return false;
    }

    // Check if the user name contains only alphanumeric characters
    for (char c : userName) {
        if (!std::isalnum(c)) {
            return false;
        }
    }

    // Additional criteria can be added based on your requirements

    return true;
}

int main() {
    std::string userName;
    std::cout << "Enter a user name: ";
    std::cin >> userName;

    if (isValidUserName(userName)) {
        std::cout << "Valid user name!" << std::endl;
    } else {
        std::cout << "Invalid user name!" << std::endl;
    }

    return 0;
}
