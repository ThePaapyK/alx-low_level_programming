#ifndef VAR_FUN
#define VAR_FUN
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printstr(va_list ap);
void printint(va_list ap);
void printchar(va_list ap);
void printfloat(va_list ap);

/**
* struct doer - contains elements
*/
typedef struct doer
{
	char *daty;
	void (*f)();
} doer;
#endif /* VAR_FUN */
