#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - entry point
*Return: 0
*/
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = a + 1; b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			if ((a < '8') || (b < '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
