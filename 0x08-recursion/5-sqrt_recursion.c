#include <math.h>
#include <stdio.h>;

/**
 * _sqrt_recursion - Finds the square root of a given number using recursion
 * @n: Number of which we want to find the square root
 * Return: The natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return -1;
}
if (n <= 1)
{
return (n);
}
int guess = sqrt(n);
return (_sqrt_recursion(n / 2));
}


int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}