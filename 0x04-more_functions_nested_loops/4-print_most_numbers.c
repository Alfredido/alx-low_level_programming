#include "main.h"

/**
 * print_most_numbers - prints 0-9
 */
void print_most_numbers(void)
{
		int n;

		for (n = 0; n < 10; n++)
		{
		if ((n == 2) || (n == 4))
		{
			;
		}
		else
		{
		_putchar(n + 48);
		}
	}
	_putchar(10);
}
