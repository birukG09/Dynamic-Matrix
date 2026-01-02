#include <stdio.h>

void pascal_triangle(int n) {
    for (int line = 1; line <= n; line++) {
        int C = 1;
        for (int i = 1; i <= line; i++) {
            printf("%d ", C);
            C = C * (line - i) / i;
        }
        printf("\n");
    }
}

int main() {
    pascal_triangle(5);
    return 0;
}
