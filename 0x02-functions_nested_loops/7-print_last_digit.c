#include "main.h"
/**
*print_last_digit - entry point
*@n: integer
*Return: l or -l
*/
int print_last_digit(int n)
{
	if (n >= 0)
	{
		int l = n % 10;

		_putchar(l + '0');
		return (l);
	}
	else
	{
		int l = n % 10;

		_putchar(-l + '0');
		return (-l);
	}
}
