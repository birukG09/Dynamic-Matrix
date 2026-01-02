#include <stdio.h>

int is_armstrong(int n) {
    int sum = 0, temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int n = 153;
    if (is_armstrong(n)) printf("%d is Armstrong\n", n);
    return 0;
}
