#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void print(char *s);
void printn(long int  n);

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 * Return: the pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *beat;

	beat = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (beat);
}

/**
* _calloc - allocates memory for an array, using malloc.
* Description: The _calloc function allocates memory for an array
* of nmemb elements of size bytes each.
* The memory is set to zero.
* If nmemb or size is 0, then _calloc returns NULL.
* If malloc fails, then _calloc returns NULL.
* @nmemb: number of array elements
* @size: size of each array element in bytes
* Return: pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	/*unsigned int i;*/

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		_memset(s, 0, nmemb * size);
	}

	return (s);
}
/**
* main - multiplies two positive integers
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int main(int argc, char **argv)
{
	int *mul;
	char *s;
	char *p;
	int i, j, k, l, n, e1 = 0, e2 = 0;

	if (argc != 3)
	{
		print("Error\n");
		exit(98);
	}
	if (atoi(argv[1]) < 0 || atoi(argv[2]) < 0)
	{
		print("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		if (i == 1)
		{
			for (j = 0; argv[i][j]; j++)
				e1++;
		}
		if (i == 2)
		{
			for (j = 0; argv[i][j]; j++)
				e2++;
		}
	}

	s = _calloc(e1, sizeof(int));
	if (s == NULL)
	{
		print("Error\n");
		exit(98);
	}
	p = _calloc(e2, sizeof(int));
	if (p == NULL)
	{
		print("Error\n");
		exit(98);
	}
	k = 1;

	for (l = 0; argv[k][l]; l++)
	{
		s[l] = argv[k][l];
	}
	n = 2;
	for (l = 0; argv[n][l]; l++)
	{
		p[l] = argv[n][l];
	}
	mul = atoi(s) * atoi(p);
	printn(mul);
	return (0);
}

/**
* print - prints a string
* @s: string
* Return: nothing
*/

void print(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}

/**
* printn - prints an integer
* @n: number to be printed
* Return: nothing
*/

void printn(long int  n)
{
/* print '-' for negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	/* Print Zero */
	if (n == 0)
		_putchar('0');

/*
* First remove the last digit of number and print
* the remaining digits using recursion, then print
* the last digit
*/
	if (n / 10)
		printn(n / 10);
	_putchar(n % 10 + '0');
}
