#include "main.h"
/**
*_strlen - function
*@s: char
*Return: int
*/
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}
