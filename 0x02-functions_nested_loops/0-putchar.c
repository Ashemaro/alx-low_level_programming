#include "main.h"
/**
 *main- A function that prints _putchar then a new line.
 *Return: No return value
*/

int main(void)
{
	int i;
	int str_array[8] = {95, 112, 117, 116, 99, 104, 97, 114};

	for (i = 0; i <= 7; i++)
		_putchar(str_array[i]);

	_putchar(10);
	return (0);
}
