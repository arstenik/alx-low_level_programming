#include <stdio.h>

/**
* main - entry point
* Return: 0 (success)
*/
int main(void)
{
	char a;
	int  b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %d bytes\n", sizeof(a));
	printf("Size of an int: %d bytes\n", sizeof(b));
	printf("Size of a long int: %d bytes\n", sizeof(c));
	printf("Size of a long long int: %d bytes\n", sizeof(d));
	printf("Size of a float: %d bytes\n", sizeof(e));
	return (0);
}