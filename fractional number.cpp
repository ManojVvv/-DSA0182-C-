#include <iostream>
using namespace std;
int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}
void simplify_fraction(int numerator, int denominator) {
  int common_divisor = gcd(numerator, denominator);
  numerator /= common_divisor;
  denominator /= common_divisor;
  cout << numerator << "/" << denominator << " is simplified as " << numerator << "/" << denominator << endl;
}
int main() {
  int num, den;
  cout << "Enter numerator: ";
  cin >> num;
  cout << "Enter denominator: ";
  cin >> den;
  simplify_fraction(num, den);
  return 0;
}

