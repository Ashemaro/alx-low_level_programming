#include "main.h"
/**
 * _isalpha - checks if a character is a letter
 * @c: integer value of the character
 * Return: returns 1 if character is a letter else 0
 */

int _isalpha(int c)
{
	if (c < 97)
	{
		if (c < 91)
		{
			if (c >= 65)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
	}
	else if (c >= 97)
	{
		if (c < 123)
		{
			return (1);
		}
		else 
		{
			return (0);
		}
	}
	return (0);
}
