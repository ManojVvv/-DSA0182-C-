
#include <iostream>
int main() 
{
int rows = 6; 
for (int i = 1; i <= rows; i++) {
for (int j = 1; j < i; j++) {
std::cout << "   ";
}
for (int k = 1; k <= rows - i + 1; k++)
{
std::cout << k << " ";
}
std::cout << std::endl;
}
 return 0;
}
