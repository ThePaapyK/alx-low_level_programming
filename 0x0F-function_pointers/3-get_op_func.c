#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_op_func - gets the right operator to work
* @get_op_func: pointer to operator function
* @s: pointer specific operator
* @a: first argument
* @b: second argument
* Return:  pointer to the function that corresponds
* to the operator given as a parameter
*/

int (*get_op_func(char *s))(int a, int b)
{
	    int i = 0;

	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

	while (ops[i].op != NULL)
	{
		if (*s == ops[i].op[0])
			return (ops[i].f(a, b));
	}
	return (0);
}	
