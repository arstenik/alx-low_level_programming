#include <stdio.h>
/**
* main - entery point
* Return: 0
*/
int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
		putchar(a);
	for (a = 65; a <= 90; a++)
		putchar(a);
	putchar(10);
	return (0);
}
