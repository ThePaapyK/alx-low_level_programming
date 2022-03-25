#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - main block
 *This program prints the alphabets in lowercase
 *except the letters q and e
 *Return: 0
 */

int main(void)
{
char c = 'a';

while (c <= 'z')
{
if (c != 5 || c != 17)
{
putchar(c);
}
c++;
putchar('\n');
}
return (0);
}
