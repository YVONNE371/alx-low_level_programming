#include "main.h"

void oneorzero(unsigned long int number);

/**
 * print_binary - prints the binary rep
 * @n: represnting numbeer
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	oneorzero(n);
}


/**
  * oneorzero - factorial to get 1 or 0
  * @number: representing number
  *
  * Return: void
  */
void oneorzero(unsigned long int number)
{
        if (number < 1)
                return;

	oneorzero(number >> 1);

        if (number & 1)
	{
                _putchar('1');
	}
        else
	{
                _putchar('0');
	}
}
