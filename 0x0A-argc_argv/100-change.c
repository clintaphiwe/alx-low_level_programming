#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * check_num - Function checks string if there are digits
 * @str: array str
 * Return: 0 Success
*/

int check_num(char *str)
{
  /*Declaring string*/
unsigned int count;

count = 0;
/*counting string*/
while (count < strlen(str))
{
  /*checks if there is a digit*/
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}

/**
 * main - Function prints the name of the program
 * @argv: Arguments
 * @argc: counts arguments
*/

int main(int argc, char *argv[])
{
int count, str_to_int;
int sum = 0;

count = 1;
while (count < argc)
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);
sum += str_to_int;
}
    /*condition IF one the number contains symbols that are not digits*/
else
{
printf("ERROR\n");
return (1);
}
count++;
}
printf("%d\n", sum); /*print sum*/
}

