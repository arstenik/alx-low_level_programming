#include "main.h"
/**
*print_to_98 - entry
*@n: int
*Return:
*/
void print_to_98(int n)
{
	if (n == 98)
		printf("%d\n", n);
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n--;
		}
	}
}
