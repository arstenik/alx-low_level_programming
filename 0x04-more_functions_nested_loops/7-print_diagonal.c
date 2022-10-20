#include "main.h"

/**
*print_diagonal - entry point
*@n: int
*Return:
*/
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			if (a == 1)
			{	_putchar('\\');
				_putchar('\n');
			}
			else
			{
				for (b = 2; b <= n; b++)
					_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
