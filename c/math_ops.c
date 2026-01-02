#include "math_ops.h"

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
double div_op(int a, int b) { return (b != 0) ? (double)a / b : 0.0; }
