#include <stdio.h>
#define NAME __FILE__

/**
 * main - prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * Return: Always 0(success)
 */

int main(void)
{
	printf("%s\n", NAME);
		return (0);
}
