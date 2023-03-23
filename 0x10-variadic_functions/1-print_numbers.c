#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to tfunction
 * @...: a varaiable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list b;
	unsigned int u;

	va_start(b, n);

	for (u = 0; u < n; u++)
	{
		printf("%d", va_arg(b, int));

		if (u != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(b);
}
