#include "main.h"

/**
 * print_alphabet_x10 - Prints X times alphabet, in lowercase.
 * return: 0
*/
void print_alphabet_x10(void)
{
	int c = 0;
	char ch;

	while (c++ <= 9)
	{
		for (ch = 97; ch <= 122; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
