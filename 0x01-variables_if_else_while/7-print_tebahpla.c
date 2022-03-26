#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main - block
 * This program prints the alphabets in reverse
 * Return: 0
 */

int main(void)
{
char c = 'z';

while (c >= 'a')
{
putchar(c);
c--;
}
return (0);
}
