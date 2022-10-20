#include "main.h"

/**
*print_triangle - entry point
*@size: int
*Return:
*/
void print_triangle(int size)
{
	if (size > 0)
	{
		int a, b, c;

		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= (size - a); b++)
				_putchar(' ');
			for (c = 1; c <= (size - b); c++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
