#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Documentation: Print all possible combinations of two two-digit numbers
 * Return: 0
 */

int main(void)
{
int a = '0';
int b = '0';
int c = '0';
int d = '0';

for (c = '0'; c <= '9'; c++)
{
for (d = '0'; d <= '9'; d++)
{
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
if (c < a || (c == a && d < b))
{
putchar(c);
putchar(d);
putchar(32);
putchar(a);
putchar(b);

if ((c < '9' || d < '8') || (a < '9' || b < '9'))
{
putchar(44);
putchar(32);
}
}
}
}
}
}
putchar('\n');
return (0);
}
