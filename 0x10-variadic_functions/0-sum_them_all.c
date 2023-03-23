#include "0-sum_them_all.c"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters passed to function
 * @...: variable number of parametrs to calculate the sum
 *
 * Return: if n == 0 - 0.
 * otherwise - sum of all parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i, y = 0;

	va_start(va, n);

	for (i = 0; i < n; i++)
		y += va_arg(va, int);

	va_end(va);

	return (y);
}
