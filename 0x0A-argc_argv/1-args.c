#include <stdio.h>
#include "main.h"

/**
 * main - The function prints out the number of arguments passed to the program
 * @argv: Array of arguments
 * @argc: Number of arguments
 * Return: Success 0
*/

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}

