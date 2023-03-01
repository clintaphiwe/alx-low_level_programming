#include "main.h"

/**
 * main - Entry point
 * rev_string -	Function that prints a string in reverse
 * @z: Pointer that is used
 * Return: 0 (Success)
 */

void rev_string(char *k)
{
int q, z, a;
char foo;

for (q = 0; k[q] != '\0'; q++)
;
z = 0;
a = q / 2;

while (a--)
{
foo = k[q - z - 1];
k[q - z - 1] = k[z];
k[z] = foo;
z++;
}
}
