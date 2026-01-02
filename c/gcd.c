#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    printf("GCD of 48 and 18 is %d\n", gcd(48, 18));
    return 0;
}
