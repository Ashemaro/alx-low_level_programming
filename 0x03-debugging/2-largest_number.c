#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

  int largest_number(int a, int b, int c)
{
	int largest;
	int num_array[3] = {int a, int b, int c};
	int index;
	int i;

	for (int i = 0; i <=3; i++)
	{
		if (num_array[i] > num_array[i + 1])
			index = num_array[i];
		else
			index = num_array[i + 1];
	}
	largest = index;
	return (largest);
}
