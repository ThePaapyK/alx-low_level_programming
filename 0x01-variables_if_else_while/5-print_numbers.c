#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - main block
 *This code prints all single digit numbers of base ten starting from 0 to 9
 *Return: 0
 */

int main(void)
{
int sdn = 0;
while (sdn < 10)
{
printf("%d", sdn);
sdn++;
}
printf("\n");
return (0);

}
