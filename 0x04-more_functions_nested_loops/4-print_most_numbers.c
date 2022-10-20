#include "main.h"

/**
*print_most_numbers - entry point
*
*Return:
*/
void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a == 4 || a == 2)
			continue;
		_putchar(a + '0');
	}
	_putchar('\n');
}
