#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - main block
 *This program prints the alphabets in lowercase
 *Return: 0
 */

int main(void)
{
char c = 'a';

while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');

return (0);
}
