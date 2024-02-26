#include  <iostream>
int main() {
    int number;
    printf("Enter the last four digits of the registration number: ");
    scanf("%d", &number);
    int last_digits = number % 10000;
    int cost = 5000;
    if (last_digits / 1000 == last_digits % 10 && last_digits / 100 % 10 == last_digits % 100 / 10 && last_digits / 10 % 10 == last_digits % 1000 / 100) {
        cost += 5000;
    } 
    if (last_digits == (last_digits / 1000 * 1000 + last_digits / 100 % 10 * 100 + last_digits / 10 % 10 * 10 + last_digits % 10)) {
        cost += 3000;
    } 
    if (last_digits % 2 == 0) {
        cost += 1000;
    }
    printf("The total cost of the registration number is: %d\n", cost);
    return 0;
}

