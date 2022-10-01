#include <stdio.h>
#include "main.h"

/**
 * main - print each argument passed to program on a line
 * @argc: Arguments count
 * @argv: Arguments vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
return (0);
}
