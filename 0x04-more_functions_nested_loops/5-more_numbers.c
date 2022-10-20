#include "main.h"

/**
*more_numbers - entry point
*Return:
*/
void more_numbers(void)
{
	int b, a;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
