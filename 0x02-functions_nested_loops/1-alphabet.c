#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point
 *
 * description: print alphabet with -putchar, followed by a new line
 *
 * return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
