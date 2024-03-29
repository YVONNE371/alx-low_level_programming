#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: Printed btwn umbers
 * @n: Params size
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int x = 0;

	if (n > 0)
	{
		va_start(params, n);

		for (; x < n; x++)
		{
			printf("%d", va_arg(params, int));
			if (x < (n - 1) && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");
}
