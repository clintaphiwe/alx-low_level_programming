#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the diagonals of a square matrix of integers.
 * @a: The matrix
 * @size: The number of rows/columns in the matrix (must be a perfect square)
 * Return: The number of rows/columns in the matrix.
 */

void print_diagsums(int *a, int size)
{
int sum1 = 0;
int sum2 = 0;
for (int i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[(i + 1) * size - i - 1];
}
printf("First diagonal: %d\n", sum1);
printf("Second diagonal: %d\n", sum2);
}
