#include "main.h"
#include "stdio.h"
/**
 * print_alphabet_x10 - Function Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
int i = 0;
char ch;
while (i <= 9)
{
ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
i++;
}
}

