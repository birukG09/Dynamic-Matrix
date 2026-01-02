#include <stdio.h>

void transpose(int A[3][3], int B[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            B[i][j] = A[j][i];
}

int main() {
    int A[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}}, B[3][3];
    transpose(A, B);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) printf("%d ", B[i][j]);
        printf("\n");
    }
    return 0;
}
