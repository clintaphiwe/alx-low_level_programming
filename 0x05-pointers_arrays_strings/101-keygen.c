#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
int foo;
char z;

srand(time(NULL));
while (foo <= 2645)
{
z = rand() % 128;
foo += z;
putchar(z);
}
putchar(2772 - foo);
return (0);
}
