#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char *str;

	str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
	return (1);
}
