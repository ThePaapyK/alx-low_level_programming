#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void print(char *s);
void printn(long int  n);

/**
* main - multiplies two positive integers
* @argc: argument count
* @argv: argument vector
* Return: 0
*/

int main(int argc, char **argv)
{
	unsigned long int mul;
	
	if (argc != 3)
	{
		print("Error\n");
		exit(98);
	}
	if(atoi(argv[1]) < 0 || atoi(argv[2]) < 0)
	{
		print("Error\n");
		exit(98);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	
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
    if (n < 0) {
        _putchar('-');
        n = n * -1;
    }
  
    /* Print Zero */
    if (n == 0)
        _putchar('0');
  
    /* First remove the last digit of number and print 
    the remaining digits using recursion, then print
    the last digit
 */
    if (n / 10)
        printn(n / 10);
  
    _putchar(n % 10 + '0');
}
