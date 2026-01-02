#include <stdio.h>

int min(int x, int y, int z) {
    if (x < y && x < z) return x;
    if (y < x && y < z) return y;
    return z;
}

int editDistance(char str1[], char str2[], int m, int n) {
    int dp[m + 1][n + 1];
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0) dp[i][j] = j;
            else if (j == 0) dp[i][j] = i;
            else if (str1[i - 1] == str2[j - 1]) dp[i][j] = dp[i - 1][j - 1];
            else dp[i][j] = 1 + min(dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]);
        }
    }
    return dp[m][n];
}

int main() {
    char str1[] = "sunday";
    char str2[] = "saturday";
    printf("Edit Distance: %d\n", editDistance(str1, str2, 6, 8));
    return 0;
}
