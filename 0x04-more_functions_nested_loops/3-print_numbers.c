#include "main.h"

/**
 *print_numbers - print numbers.
 * 0 to 9
 *
 * Return: number
 */

void print_numbers(void)
{
	int number = 0;

	for (number = 0; number < 9; number++)
	{
		_putchar(number);
	}
	_putchar(10);
}
