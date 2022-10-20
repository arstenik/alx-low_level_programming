#include "main.h"
/**
*print_square - entry point
*@size: int
*Return:
*/
void print_square(int size)
{
	if (size > 0)
	{
		int a, b;

		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
