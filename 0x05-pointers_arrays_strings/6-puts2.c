#include "main.h"
/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 * Return: void
 */
void puts2(char *str)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar('\n');
}
