#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - entry point
*Return: 0
*/
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
