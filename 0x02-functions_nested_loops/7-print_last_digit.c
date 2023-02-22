#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @r: Number to be checked
 * Return: Nothing to return
 */

int print_last_digit(int r)
{
	int i;
	int temp_int;

	for (i = 1; i <= 9; i++)
	{
		if (r < 0)
		{
			temp_int = r + i;
			if (temp_int % 10 == 0)
			{
				return (i);
			}
		}
		else if (r == 0)
		{
			return (0);
		}
		else
		{
			temp_int = r - i;
			if (temp_int % 10 == 0)
			{
				return (i);
			}
	}
	return (0);
}
