#include <stdio.h>

int main() {
    int year = 2024;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) printf("%d is leap\n", year);
    else printf("%d is not\n", year);
    return 0;
}
