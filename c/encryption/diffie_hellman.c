#include <stdio.h>

long long power(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

int main() {
    long long p = 23; // Prime
    long long g = 5;  // Primitive root
    long long a = 6;  // Alice private
    long long b = 15; // Bob private
    
    long long A = power(g, a, p);
    long long B = power(g, b, p);
    
    long long secretA = power(B, a, p);
    long long secretB = power(A, b, p);
    
    printf("Diffie-Hellman Key Exchange:\n");
    printf("Shared Secret A: %lld\n", secretA);
    printf("Shared Secret B: %lld\n", secretB);
    
    return 0;
}
