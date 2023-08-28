#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexadecimal
 * @buffer: The address of memory to print
 * @size: The size of memory to print
 * Return: 0
*/

void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;
i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}

/**
 * main - Function to check the code
 * Return: 0
*/

int main(void)
{
char buffer[98] = {0x00};
simple_print_buffer(buffer, 98);
_memset(buffer, 0x01, 98);
printf("-------------------------------\n");
simple_print_buffer(buffer, 98);
return (0);
}
