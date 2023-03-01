#include "main.h"

/**
 * puts_half - Function that prints the second half of the string
 * @str:Pointer of the string reference
 * Return: 0 (Success)
 */

void puts_half(char *str)
{
int i;

for (a = 0; str[a] != '\0'; a++)
;
a++;
for (a /= 2; str[a] != '\0'; a++)
{
_putchar(str[a]);
}
_putchar('\n');
}
