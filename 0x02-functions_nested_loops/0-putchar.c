#include "main.h"

/**
 * main - printing _putchar, followed by a new line.
 * Return: 0
*/

int main(void)
{
	char c[] = "_putchar";
	unsigned int i;

	for (i = 0; i <= 7; i++)
		_putchar(c[i]);
	_putchar('\n');

	return (0);
}
