int is_prime_number(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}




int is_prime_number(int n, int i) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % i == 0) return 0;
    if (i * i > n) return 1;
    return is_prime_number(n, i + 2);
}

int is_prime_number(int n) {
    return is_prime_number(n, 2);
}