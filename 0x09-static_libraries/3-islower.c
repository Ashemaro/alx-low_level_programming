#include "main.h"
/**
 * _islower - Tells if a letter is lowercse
 * @c: Integer value of the letter
 * Return: returns one if lowercase and zero otherwise
 */
int _islower(int c)
{
	if (c < 97)
	{
		return (0);
	}
	else if (c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
