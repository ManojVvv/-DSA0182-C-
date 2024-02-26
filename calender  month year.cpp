+ #include <iostream>
#include <stdbool.h>
bool is_leap_year(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
} 
int days_in_month(int month, int year) {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            return is_leap_year(year) ? 29 : 28;
        default:
            return -1; 
    }
}

void print_calendar(int year, int month) {
    int days = days_in_month(month, year);
    if (days == -1) {
        printf("Invalid month.\n");
        return;
    } 
    int start_day = (year - 1) % 7 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400 + 1;
    if (month > 2 && is_leap_year(year - 1)) {
        start_day = (start_day + 1) % 7;
    }

    printf("   Sun Mon Tue Wed Thu Fri Sat\n");
    for (int i = 0; i < start_day; i++) {
        printf("    ");
    }

    for (int day = 1; day <= days; day++) {
        printf("%3d ", day);
        if ((day + start_day) % 7 == 0) {
            printf("\n");
        }
    }
}
int main() {
    int year, month;

    printf("Enter year (YYYY): ");
    scanf("%d", &year);

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    print_calendar(year, month);

    return 0;
}

