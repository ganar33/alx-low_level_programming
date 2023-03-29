#include "main.h"

/**
 * puts_half - Prints half of an str
 * @str: str
*/

void puts_half(char *str)
{
	int i, len = strlen(str);

	if (len % 2 != 0)
		len = len / 2 + 1;
	else
		len /= 2;

	for (i = len; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
