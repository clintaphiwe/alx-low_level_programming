#include "main.h"

/**
 * is_prime_helper - A helper function to check for prime recursively.
 * @n: The number to check.
 * @i: The current divisor to check.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int i)
{
if (i * i > n)  /* If i squared is greater than n, no divisors left to check */
return (1);
if (n % i == 0)  /* If n is divisible by i, it's not a prime number */
return (0);
return (is_prime_helper(n, i + 1));  /* Recursively check the next divisor */
}

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1)  /* 0 and 1 are not prime numbers */
return (0);
return (is_prime_helper(n, 2));  /* Start checking divisors from 2 */
}
