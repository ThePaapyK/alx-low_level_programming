#include "main.h"

/**
 * print_line - prints line
 * @n: indicates length of line
 *
 */

void print_line(int n)
{
int c;
if (n > 0)
{
for (c = 0; c < n; c++)
{
_putchar('_');
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
