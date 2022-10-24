#include "main.h"
/**
*rev_string - function
*@s: char
*/
void rev_string(char *s)
{
	int n = 0;
	int j = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	for (j = n - 1; j >= n / 2; j--)
	{
		char c;

		c = s[j];
		s[j] = s[n - j - 1];
		s[n - j - 1] = c;
	}
}
