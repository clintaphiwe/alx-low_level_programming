#include <stddef.h>
#include <stdint.h>

/**
 * binary_to_uint - Convert binary to uint
 * @b: binary
 * Return: Success
*/

unsigned int binary_to_uint(const char *b)
{
if (b == NULL)
{
return (0);
}
unsigned int result = 0;
while (*b != '\0')
{
if (*b != '0' && *b != '1')
{
return (0);
}
result = (result << 1) | (*b == '1');
b++;
}
return (result);
}
