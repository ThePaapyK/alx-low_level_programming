#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 *main - main block
 *Return: 1
 */

int main(void)
{
int s = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19\n");
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", s);
write(1, "\n", 1);
return (1);
}