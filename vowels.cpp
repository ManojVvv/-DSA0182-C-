#include <iostream>
using namespace std
int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    c = tolower(c);  
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        cout << c << " is a vowel." << endl;
    } else if (isalpha(c)) 
	{   
        cout << c << " is a consonant." << endl;
    } else {
        cout << c << " is not an alphabet." << endl;
    }
    return 0;
}

