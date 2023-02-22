#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @r: Number to be checked
 * Return: Nothing to return
 */

int print_last_digit(int r)
{
	int i;

	if (r < 0)
		r = -r;
	i = r % 10;

	if (i < 0)
		i = -i;

	_putchar(i + '0');
	return (i);
}
