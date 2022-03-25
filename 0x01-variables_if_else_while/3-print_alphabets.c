#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - main block
 *This programme prints all the alphabets in lower case, and in uppercase and
 *adds a newline
 *Return: 0
 */

int main(void)
{
char c = 'a';
char d = 'A';

while (c <= 'z')
{
putchar(c);
c++;
}

while (d <= 'Z')
{
putchar(d);
d++;
}

putchar('\n');

return (0);
}
