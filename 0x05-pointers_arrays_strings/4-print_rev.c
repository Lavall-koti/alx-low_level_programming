#include "main.h"

/**
 * print_rev - print a string in reverse, follow by a new line
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s) - 1;

	while (len >= 0)
		_putchar(s[len--]);

	_putchar('\n');
}
