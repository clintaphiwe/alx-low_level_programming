#include "main.h"
#include <stdio.h>

/**
 * main -Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
 char *n = "123456789243457436782"
"35745756784776857856456"
"85876876774586734734563456453743756756784458";
char *m = "903479066347069723468291456"
"93462596349586932465973246"
"59762347956349265983465962349569346";
char r[100];
char r2[10];
char r3[11];
char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "1234567890";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "999999999";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        return (0);
}
