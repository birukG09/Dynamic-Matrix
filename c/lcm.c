#include <stdio.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    printf("LCM of 12 and 18: %d\n", lcm(12, 18));
    return 0;
}
