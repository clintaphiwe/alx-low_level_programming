#include <math.h>

int _sqrt_recursion(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return n;
    int sqrt_n = sqrt(n);
    if (sqrt_n * sqrt_n == n) return sqrt_n;
    return -1;
}



int _sqrt_recursion(int n, int guess) {
    if (guess * guess == n) return guess;
    if (guess * guess > n) return -1;
    return _sqrt_recursion(n, guess + 1);
}

int _sqrt_recursion(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return n;
    return _sqrt_recursion(n, 1);
}