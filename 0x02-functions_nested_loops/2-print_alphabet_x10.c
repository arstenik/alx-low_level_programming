#include "main.h"

/**
*print_alphabet_x10 - entry
*Return:
*/
void print_alphabet_x10(void)
{
	int a = 1;

	while (a <= 10)
	{
		char b = 'a';

		while (b <= 'z')
			_putchar(b), b++;
		_putchar('\n');
		a++;
	}
}
