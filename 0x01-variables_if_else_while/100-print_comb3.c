#include <stdio.h>
#include <stdlib.h>

/**
 *main - main block
 *Documentation: Prints out all possible different
 *combinations of two digits
 *Return: 0
 */

int main(void)
{
int a;
int b;
int n;
n = '1';
a = '0';
for (a = '0'; a < '9'; a++)
{
for (b = n; b <= '9'; b++)
{
putchar(a);
putchar(b);
if (a < '8' || b < '9')
{
putchar(44);
putchar(32);
}
}
n++;
}
putchar('\n');
return (0);
}
