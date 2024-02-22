#include <iostream>
#include <cstring>
int main() {
    char upperCaseString[100];
    std::cout << "Enter a string in uppercase: ";
    std::cin.getline(upperCaseString, 100);
    int length = strlen(upperCaseString);
    for (int i = 0; i < length; ++i) {
        if (isupper(upperCaseString[i])) {
            upperCaseString[i] = tolower(upperCaseString[i]);
        }
    }
    std::cout << "String in lowercase: " << upperCaseString << std::endl;
    return 0;
}

