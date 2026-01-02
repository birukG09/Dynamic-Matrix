#include <stdio.h>
#include <math.h>

void solve_quadratic(double a, double b, double c) {
    double discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        printf("Roots: %.2f, %.2f\n", (-b + sqrt(discriminant))/(2*a), (-b - sqrt(discriminant))/(2*a));
    } else if (discriminant == 0) {
        printf("Root: %.2f\n", -b/(2*a));
    } else {
        printf("Complex roots\n");
    }
}

int main() {
    solve_quadratic(1, -5, 6);
    return 0;
}
