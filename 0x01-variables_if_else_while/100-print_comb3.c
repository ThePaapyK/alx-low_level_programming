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
a = 0;
b = 1;
while (a < '9')
{
while (b <= '9')
{
putchar(a);
putchar(b);
putchar(44);
putchar(32);
b++;
}
a++;
b++;
}
putchar('\n');
return (0);
}
