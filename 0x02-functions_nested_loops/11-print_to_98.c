#include"main.h"

/**
 * print_to_98 - print n to 98 counts
 *
 * @n : number to start from
 */

void print_to_98(int n)
{

	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	printf("98");
	putchar('\n');
}