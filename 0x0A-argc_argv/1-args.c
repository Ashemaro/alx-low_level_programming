#include <stdio.h>
/**
 * main - Prints out the number of arguments provided
 * return - returns no value
 */

int main(int argc, char *argv[])
{
	if(argc > 1){
		printf("%d \n", argc-1);
	}
	return 0;
}
