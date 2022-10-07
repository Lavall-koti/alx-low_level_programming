#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: numbe of member of element
 * @size: byte size
 *
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr = NULL;
unsigned int i;

if (nmemb > 0 && size > 0)
{
	ptr = malloc(size * nmemb);

	if (ptr != NULL)
	{
		for (i = 0; i < nmemb * size; i++)
			*((char *)ptr + i) = 0;
	}
}

	return (ptr);
}
