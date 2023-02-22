#include "main.h"
/**
 * print_sign - prints the sign on a number
 * @n: The integer being checked
 * Return: returns 1 if +ve and -1 if ive
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(43);
		return(49);
	}
	return (0);
}
