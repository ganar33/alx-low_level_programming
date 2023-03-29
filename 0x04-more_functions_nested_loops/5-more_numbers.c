#include "main.h"

/**
 * print_to_14 - prints numbers 0 to 14
 */
void print_to_14(void)
{
	int n;

	n = 0;
	while (n <= 14)
	{
		if (n > 9)
			_putchar(n / 10 + 48);
		_putchar(n % 10 + 48);
		n++;
	}
	_putchar('\n');
}
/**
 * more_numbers - prints numbers X times
 */
void more_numbers(void)
{
	int i;

	for (i = 1; i <= 10; i++)
		print_to_14();
}
