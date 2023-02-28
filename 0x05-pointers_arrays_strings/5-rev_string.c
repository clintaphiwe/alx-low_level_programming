#include "main.h"

/**
 * rev_string -Function that prints a string in reverse
 * @z: Pointer that is used
 * Return: 0 (Success)
 */

void rev_string(char *z)
{
int q, z, a;
char rev;

for (q = 0; z[q] != '\0'; z++)
;
ink = 0;
a = q / 2;

while (a--)
{
rev = z[q - ink - 1];
z[q - ink - 1] = z[ink];
z[ink] = rev;
ink++;
}
}
