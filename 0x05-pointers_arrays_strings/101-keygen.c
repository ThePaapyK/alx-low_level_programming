#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int random;
	int limit = 2772;
	char char1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/,.-+=~`<>:";

	srand((unsigned int)(time(NULL)));

	while (limit > 126)
	{
		random = char1[rand() % (sizeof(char1 - 1))];
		limit -= random;
		printf("%c", random);
	}
	if (limit > 0)
		printf("%c", limit);
	return (0);
}
