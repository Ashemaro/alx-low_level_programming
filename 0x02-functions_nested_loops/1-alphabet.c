#include "main.h"

/**
 *main - prints the alphabet in lowercase letters
 *Return : No return value
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);

	_putchar(10);
}
