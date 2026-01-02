#include <stdio.h>

void find_divisors(int n) {
    printf("Divisors of %d: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    printf("\n");
}

int main() {
    find_divisors(28);
    return 0;
}
