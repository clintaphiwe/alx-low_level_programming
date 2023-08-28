#include "main.h"

/**
 * _strspn - Entry Point
 * @s: Input
 * @accept: Input
 * Return: 0 (SUCCESS)
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;

while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == "\0")
return (n);
}
s++;
}
return (n);
}
