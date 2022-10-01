#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into program.
 * @argc: Arguments Count
 * @argv: Arguments Vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
