#include "main.h"

/**
 *print_alphabet - prints the alphabet in lowercase letters
 *Return : No return value
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);

	_putchar(10);
}
