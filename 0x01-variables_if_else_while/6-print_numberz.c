#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * This program prints all single digits numbers in base ten
 * starting from 0
 * Return: 0
 */

int main(void)
{
char a = '0';

while (a <= '9')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
