#include <stdio.h>

int main() {
    int n = 10, t1 = 0, t2 = 1, next;
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("\n");
    return 0;
}
