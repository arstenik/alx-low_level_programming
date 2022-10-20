#include "main.h"

/**
*print_line - entry point
*@n: int
*Return:
*/
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
