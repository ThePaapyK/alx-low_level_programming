#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - adds two arguments
* @a: first argument
* @b: second argument
* Return: sum of a and b
*/

int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
* op_sub - finds the difference between two arguments
* @a: first argument
* @b: second argument
* Return: the difference of a and b
*/

int op_sub(int a, int b)
{
	int diff = a - b;

	return (diff);
}

/**
* op_mul - finds the product of two arguments
* @a: argument 1
* @b: argument 2
* Return: product of a and b
*/

int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}

/**
* op_div - divides one argument by the other
* @a: argument 1
* @b: argument 2
* Return: a divided by b
*/

int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}

/**
* op_mod - find the remainder of the division of a by b
* @a: first argument
* @b: second argument
* Return: a mod b
*/

int op_mod(int a, int b)
{
	int mod = a % b;

	return (mod);
}
