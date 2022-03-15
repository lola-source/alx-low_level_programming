#include "main.h"
/**
 *main-entry point
 *print_alphabet -nested
 *description: print alphabet with -putchar, followed by a new line
 *
 *return: void
 */
int main(void)
{
	void print_alphabet(void)
	{
		char c;
		
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar(c);
		}
		putchar('\n');
	}
	return(0);
}

