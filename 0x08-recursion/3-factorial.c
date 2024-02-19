#include <stdio.h>

/**
 * factorial - Prints the factorial of a number using recursion.
 * @n: number
 * Return: Success
*/

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
