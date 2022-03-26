#include <stdio.h>
#include <stdlib.h>

/**
 *main - main block
 *Documentation: prints the single digits in hexadecimal
 *Return: 0
 */

int main(void)
{
int n;
char c;

for (n = '0'; n <= '9'; n++)
putchar(n);
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
